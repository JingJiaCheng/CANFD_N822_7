/* LibTomCrypt, modular cryptographic library -- Tom St Denis
 *
 * LibTomCrypt is a library that provides various cryptographic
 * algorithms in a highly modular and flexible manner.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 *
 * Tom St Denis, tomstdenis@gmail.com, http://libtom.org
 */
#include "tomcrypt.h"

/**
  @file hmac_test.c
  LTC_HMAC support, self-test, Tom St Denis/Dobes Vandermeer
*/

#ifdef LTC_HMAC

#define LTC_HMAC_BLOCKSIZE hash_descriptor[hash].blocksize

/*
    TEST CASES SOURCE:

Network Working Group                                          P. Cheng
Request for Comments: 2202                                          IBM
Category: Informational                                        R. Glenn
                                                                   NIST
                                                         September 1997
                 Test Cases for LTC_HMAC-LTC_MD5 and LTC_HMAC-LTC_SHA-1
*/

/**
  LTC_HMAC self-test
  @return CRYPT_OK if successful, CRYPT_NOP if tests have been disabled.
*/
int hmac_test(void)
{
 #ifndef LTC_TEST
    return CRYPT_NOP;
 #else    
    unsigned char digest[MAXBLOCKSIZE];
    int i;

    static const struct hmac_test_case {
        int num;
        char *algo;
        unsigned char key[128];
        unsigned long keylen;
        unsigned char data[128];
        unsigned long datalen;
        unsigned char digest[MAXBLOCKSIZE];
    } cases[] = {
        /*
        3. Test Cases for LTC_HMAC-LTC_SHA-1

        test_case =     1
        key =           0x0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c
        key_len =       20
        data =          "Hi Ther     20
        digest =        0x4c1a03424b55e07fe7f27be1d58bb9324a9a5a04
        digest-96 =     0x4c1a03424b55e07fe7f27be1
        */
        { 5, "sha1",
            {0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
             0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
             0x0c, 0x0c, 0x0c, 0x0c}, 20,
            "Test With Truncation", 20,
            {0x4c, 0x1a, 0x03, 0x42, 0x4b, 0x55, 0xe0, 0x7f, 0xe7, 0xf2,
             0x7b, 0xe1, 0xd5, 0x8b, 0xb9, 0x32, 0x4a, 0x9a, 0x5a, 0x04} },

        /*
        test_case =     6
        key =           0xaa repeated 80 times
        key_len =       80
        data =          "Test Using Larger Than Block-Size Key - Hash Key First"
        data_len =      54
        digest =        0xaa4ae5e15272d00e95705637ce8a3b55ed402112
        */
        { 6, "sha1",
            {0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa}, 80,
            "Test Using Larger Than Block-Size Key - Hash Key First", 54,
            {0xaa, 0x4a, 0xe5, 0xe1, 0x52, 0x72, 0xd0, 0x0e,
             0x95, 0x70, 0x56, 0x37, 0xce, 0x8a, 0x3b, 0x55, 
             0xed, 0x40, 0x21, 0x12} },

        /*
        test_case =     7
        key =           0xaa repeated 80 times
        key_len =       80
        data =          "Test Using Larger Than Block-Size Key and Larger
                        Than One Block-Size Data"
        data_len =      73
        digest =        0xe8e99d0f45237d786d6bbaa7965c7808bbff1a91
        */
        { 7, "sha1",
            {0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa}, 80,
            "Test Using Larger Than Block-Size Key and Larger Than One Block-Size Data", 73,
            {0xe8, 0xe9, 0x9d, 0x0f, 0x45, 0x23, 0x7d, 0x78, 0x6d,
             0x6b, 0xba, 0xa7, 0x96, 0x5c, 0x78, 0x08, 0xbb, 0xff, 0x1a, 0x91} },

        /*
        2. Test Cases for LTC_HMAC-LTC_MD5

        test_case =     1
        key =           0x0b 0b 0b 0b 
                          0b 0b 0b 0b
                          0b 0b 0b 0b
                          0b 0b 0b 0b
        key_len =       16
        data =          "Hi There"
        data_len =      8
        digest =        0x92 94 72 7a 
                          36 38 bb 1c 
                          13 f4 8e f8 
                          15 8b fc 9d
        */
        { 1, "md5",
            {0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 
             0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b}, 16,
            "Hi There", 8,
            {0x92, 0x94, 0x72, 0x7a, 0x36, 0x38, 0xbb, 0x1c, 
             0x13, 0xf4, 0x8e, 0xf8, 0x15, 0x8b, 0xfc, 0x9d}  },
        /*
        test_case =     2
        key =           "Jefe"
        key_len =       4
        data =          "what do ya want for nothing?"
        data_len =      28
        digest =        0x750c783e6ab0b503eaa86e310a5db738
        */
        { 2, "md5",
            "Jefe", 4,
            "what do ya want for nothing?", 28,
            {0x75, 0x0c, 0x78, 0x3e, 0x6a, 0xb0, 0xb5, 0x03, 
             0xea, 0xa8, 0x6e, 0x31, 0x0a, 0x5d, 0xb7, 0x38} },

        /*
        test_case =     3
        key =           0xaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
        key_len         16
        data =          0xdd repeated 50 times
        data_len =      50
        digest =        0x56be34521d144c88dbb8c733f0e8b3f6
        */
        { 3, "md5",
            {0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa}, 16,
            {0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
             0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
             0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
             0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
             0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd}, 50,
            {0x56, 0xbe, 0x34, 0x52, 0x1d, 0x14, 0x4c, 0x88,
             0xdb, 0xb8, 0xc7, 0x33, 0xf0, 0xe8, 0xb3, 0xf6} },
        /*

        test_case =     4
        key = 0x0102030405060708090a0b0c0d0e0f10111213141516171819
        key_len         25
        data =          0xcd repeated 50 times
        data_len =      50
        digest =        0x697eaf0aca3a3aea3a75164746ffaa79
        */
        { 4, "md5",
            {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a,
             0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14,
             0x15, 0x16, 0x17, 0x18, 0x19}, 25,
            {0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
             0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
             0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
             0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
             0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd}, 50,
            {0x69, 0x7e, 0xaf, 0x0a, 0xca, 0x3a, 0x3a, 0xea, 
             0x3a, 0x75, 0x16, 0x47, 0x46, 0xff, 0xaa, 0x79} },


        /*
 
        test_case =     5
        key =           0x0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c0c
        key_len =       16
        data =          "Test With Truncation"
        data_len =      20
        digest =        0x56461ef2342edc00f9bab995690efd4c
        digest-96       0x56461ef2342edc00f9bab995
        */
        { 5, "md5",
            {0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
             0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c}, 16,
            "Test With Truncation", 20,
            {0x56, 0x46, 0x1e, 0xf2, 0x34, 0x2e, 0xdc, 0x00, 
             0xf9, 0xba, 0xb9, 0x95, 0x69, 0x0e, 0xfd, 0x4c} },

        /*

        test_case =     6
        key =           0xaa repeated 80 times
        key_len =       80
        data =          "Test Using Larger Than Block-Size Key - Hash 
Key First"
        data_len =      54
        digest =        0x6b1ab7fe4bd7bf8f0b62e6ce61b9d0cd
        */
        { 6, "md5",
            {0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa}, 80,
            "Test Using Larger Than Block-Size Key - Hash Key First", 54,
            {0x6b, 0x1a, 0xb7, 0xfe, 0x4b, 0xd7, 0xbf, 0x8f, 
             0x0b, 0x62, 0xe6, 0xce, 0x61, 0xb9, 0xd0, 0xcd} },

        /*

        test_case =     7
        key =           0xaa repeated 80 times
        key_len =       80
        data =          "Test Using Larger Than Block-Size Key and Larger
                        Than One Block-Size Data"
        data_len =      73
        digest =        0x6f630fad67cda0ee1fb1f562db3aa53e
        */
        { 7, "md5",
            {0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
             0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa}, 80,
            "Test Using Larger Than Block-Size Key and Larger Than One Block-Size Data", 73,
            {0x6f, 0x63, 0x0f, 0xad, 0x67, 0xcd, 0xa0, 0xee,
             0x1f, 0xb1, 0xf5, 0x62, 0xdb, 0x3a, 0xa5, 0x3e} }
    };

    unsigned long outlen;
    int err;
    int tested=0,failed=0;
    for(i=0; i < (int)(sizeof(cases) / sizeof(cases[0])); i++) {
        int hash = find_hash(cases[i].algo);
        if (hash == -1) continue;
        ++tested;
        outlen = sizeof(digest);
        if((err = hmac_memory(hash, cases[i].key, cases[i].keylen, cases[i].data, cases[i].datalen, digest, &outlen)) != CRYPT_OK) {
#if 0
            printf("LTC_HMAC-%s test #%d, %s\n", cases[i].algo, cases[i].num, error_to_string(err));
#endif
            return err;
        }

        if(XMEMCMP(digest, cases[i].digest, (size_t)hash_descriptor[hash].hashsize) != 0)  {
            failed++;
#if 0
            unsigned int j;
            printf("\nLTC_HMAC-%s test #%d:\n", cases[i].algo, cases[i].num);
            printf(  "Result:  0x");
            for(j=0; j < hash_descriptor[hash].hashsize; j++) {
                printf("%2x ", digest[j]);
            }
            printf("\nCorrect: 0x");
            for(j=0; j < hash_descriptor[hash].hashsize; j++) {
               printf("%2x ", cases[i].digest[j]);
            }
            printf("\n");
            return CRYPT_ERROR;
#endif
        } else {
            /* printf("LTC_HMAC-%s test #%d: Passed\n", cases[i].algo, cases[i].num); */
        }
    }

    if (failed != 0) {
        return CRYPT_FAIL_TESTVECTOR;
    } else if (tested == 0) {
        return CRYPT_NOP;
    } else {
        return CRYPT_OK;
    }
 #endif
}

#endif


/* $Source$ */
/* $Revision$ */
/* $Date$ */
