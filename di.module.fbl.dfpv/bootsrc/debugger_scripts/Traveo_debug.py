#/******************************************************************************#
#* $Revision: 330 $
#* $Date:: 2015-03-27 15:10:42 +0900#$
# *****************************************************************************/#
#/* __DISCLAIMER_START__                                                      */#
#/******************************************************************************#
#* Copyright (C) 2014 Spansion LLC. All Rights Reserved.                        #
#*                                                                              #
#* This software is owned and published by:                                     #
#* Spansion LLC, 915 DeGuigne Dr. Sunnyvale, CA  94088-3453 ("Spansion").       #
#*                                                                              #
#* BY DOWNLOADING, INSTALLING OR USING THIS SOFTWARE, YOU AGREE TO BE BOUND     #
#* BY ALL THE TERMS AND CONDITIONS OF THIS AGREEMENT.                           #
#*                                                                              #
#* This software contains source code for use with Spansion                     #
#* components. This software is licensed by Spansion to be adapted only         #
#* for use in systems utilizing Spansion components. Spansion shall not be      #
#* responsible for misuse or illegal use of this software for devices not       #
#* not be responsible for issues arising from incorrect user implementation     #
#* of the software.                                                             #
#*                                                                              #
#* SPANSION MAKES NO WARRANTY, EXPRESS OR IMPLIED, ARISING BY LAW OR OTHERWISE, #
#* REGARDING THE SOFTWARE (INCLUDING ANY ACOOMPANYING WRITTEN MATERIALS),       #
#* ITS PERFORMANCE OR SUITABILITY FOR YOUR INTENDED USE, INCLUDING,             #
#* WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY, THE IMPLIED     #
#* WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE OR USE, AND THE IMPLIED         #
#* WARRANTY OF NONINFRINGEMENT.                                                 #
#* SPANSION SHALL HAVE NO LIABILITY (WHETHER IN CONTRACT, WARRANTY, TORT,       #
#* NEGLIGENCE OR OTHERWISE) FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT      #
#* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION,     #
#* LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS) ARISING FROM USE OR   #
#* INABILITY TO USE THE SOFTWARE, INCLUDING, WITHOUT LIMITATION, ANY DIRECT,    #
#* INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES OR LOSS OF DATA,      #
#* SAVINGS OR PROFITS,                                                          #
#* EVEN IF SPANSION HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.        #
#* YOU ASSUME ALL RESPONSIBILITIES FOR SELECTION OF THE SOFTWARE TO ACHIEVE YOUR#
#* INTENDED RESULTS, AND FOR THE INSTALLATION OF, USE OF, AND RESULTS OBTAINED  #
#* FROM, THE SOFTWARE.                                                          #
#*                                                                              #
#* This software may be replicated in part or whole for the licensed use,       #
#* with the restriction that this Disclaimer and Copyright notice must be       #
#* included with each copy of this software, whether used in part or whole,     #
#* at all times.                                                                #
#******************************************************************************/#
#/* __DISCLAIMER_END__                                                        */#
#/*****************************************************************************/#
#/** \file traveo_debug.py                                                      #
# **                                                                            #
# ** \brief GHS debugger script                                                 #
# **                                                                            #
# ** History:                                                                   #
# **   - 2014-09-03    0.10    CEy    Initial version for Traveo family         #
# **   - 2014-09-09    0.11    CEy    Fixed problem in case of power-on with    #
# **   - 2014-09-15    0.12    CEy    Fake Clock spec has changed (on/off only) #
# **                                  Fixed recognition of unlocked state       #
# **   - 2014-10-17    0.14    CEy    Automatic path to script/blacklist, no    #
# **                                  longer using literal debug connection name#
# **                                  to increase compatibility if called from  #
# **                                  other projects. Changed Flash marker comp.#
# *****************************************************************************/#

############################## START OF USER CONFIGURATION ###############################


#-----------------------------------------------------------------------------------------
# Set the label/address (see GHS manual for supported formats) where the
# debugger will stop after the connection process. Must be a string.
BREAKPOINT_LABEL = "_start"

#-----------------------------------------------------------------------------------------
# Configure whether the watchdog reset shall be masked by a special debug register bit
DBG_MASK_WDG_RESET       = False  # Set True or False

#-----------------------------------------------------------------------------------------
# Configure whether the Fake Power On mode shall be enabled by a special debug register bit
DBG_ENABLE_FAKEPOWERON   = False  # Set True or False

#-----------------------------------------------------------------------------------------
# Configure whether the Fake Clock On mode shall be enabled by a special debug register bit
DBG_ENABLE_FAKECLOCKON   = False  # Set True or False

#-----------------------------------------------------------------------------------------
# For BUILD_FLASH build configurations it can be configured if GHS shall program the Flash
# in the target MCU. If Flash programming is disabled, the debugger only verifies the
# the content of the target memory
ENABLE_FLASH_PROGRAMMING = True  # Set True or False

#-----------------------------------------------------------------------------------------
# In case the debug script detects that the target MCU is secured, it will try to unlock
# the MCU with the following key
SECURITY_KEY_BYTES_0_TO_3   = 0xffffffff  # Will be written to SCCFG_SECKEY0
SECURITY_KEY_BYTES_4_TO_7   = 0xffffffff  # Will be written to SCCFG_SECKEY1
SECURITY_KEY_BYTES_8_TO_11  = 0xffffffff  # Will be written to SCCFG_SECKEY2
SECURITY_KEY_BYTES_12_TO_15 = 0xffffffff  # Will be written to SCCFG_SECKEY3

#-----------------------------------------------------------------------------------------
# The blacklist prevents the debugger to access I/O areas that have side-effects on MCU
# behavior (e.g. FIFO registers) if the access would be made by CPU instrumentation
APPLY_BLACKLIST = True  # Set True or False


############################## END OF USER CONFIGURATION #################################


############################## START OF DEFINITIONS ######################################

# Script settings (e.g. to debug the Python script)
ENABLE_DEBUG_COMMAND_OUTPUT = False  # Set True or False

#-----------------------------------------------------------------------------------------
# Register addresses and other definitions used in the script:

# REG_AHB__xyz --> Register Address via AHB-AP
# REG_APB__xyz --> Register Address via APB-AP

# System Controller related definitions
REG_AHB__SYSC0_PROTKEYR     = 0xb0600000
REG_AHB__SYSC0_SYSIDR       = 0xb0600280
REG_AHB__SYSC0_SPECFGR      = 0xb0600680
MASK__SYSC0_SPECFGR_IOxRSTC = 0x00600000
KEY__SYSC0_UNLOCK           = 0x5cacce55
CHIP_ID__S6J311EJ           = 0x100a0000
CHIP_ID__S6J320CQX          = 0x10060000
CHIP_ID__S6J326xx           = 0x10100000
CHIP_ID__S6J32Dxx           = 0x10110000

# Security Checker related definitions
REG_APB__SCCFG_STAT2        = 0x000c0180
REG_APB__SCCFG_SECKEY0      = 0x000c0190
REG_APB__SCCFG_UNLCK        = 0x000c01a4
REG_APB__SCSCU_CNTL         = 0x000c01b4
MASK__SCCFG_STAT2_SECEN     = 0x00000001
MASK__SCCFG_STAT2_SECLOCK   = 0x00000002
MASK__SCCFG_STAT2_SEC       = 0x00000004
MASK__SCCFG_STAT2_DBGRDY    = 0x00000100
KEY__SCCFG_UNLOCK           = 0x5ecacce5
KEY__SCCFG_LOCK             = 0xa135331a
MASK__SCSCU_CNTL_FAKE_CLKON = 0x00000003
MASK__SCSCU_CNTL_FAKE_PDON  = 0x00000010
MASK__SCSCU_CNTL_WDGRSTMASK = 0x00000100
MASK__SCSCU_CNTL_JTAGCON    = 0x00010000

# TCFLASH related definitions
FLASH_BASE_ADDRESS_TCM      = 0x009f0000
FLASH_BASE_ADDRESS_AXI      = 0x019f0000
FLASH_MK_BASE_ADDRESS_AXI   = 0x019f0000
FLASH_DDR_BASE_ADDRESS_AXI  = 0x019f0080
FLASH_BDR_BASE_ADDRESS_AXI  = 0x019f00c0
FLASH_WDR_BASE_ADDRESS_AXI  = 0x019f0100

# System RAM related definitions
SYSTEM_RAM_START_ADDRESS    = 0x02000000
SYSTEM_RAM_SIZE_BYTES       = {
                                  CHIP_ID__S6J311EJ     : 256*1024,
                                  CHIP_ID__S6J320CQX    : 128*1024,
                                  CHIP_ID__S6J326xx     : 128*1024,
                                  CHIP_ID__S6J32Dxx     : 128*1024,
                              }

# TCMRAM related definitions
TCMRAM_START_ADDRESS        = 0x00000000
TCMRAM_SIZE_BYTES           = {
                                  CHIP_ID__S6J311EJ     :  64*1024,
                                  CHIP_ID__S6J320CQX    :  128*1024,
                                  CHIP_ID__S6J326xx     :  128*1024,
                                  CHIP_ID__S6J32Dxx     :  64*1024,
                              }

# VRAM related definitions
VRAM_START_ADDRESS          = 0x50000000
VRAM_SIZE_BYTES             = {
                                  CHIP_ID__S6J311EJ     :           0,
                                  CHIP_ID__S6J320CQX    : 2*1024*1024,
                              }

# BootROM related definitions
# The address of the "BX LR" instruction in the BootROM, that will branch to user code
# (either default entry 0x00a00000 or alternative boot vector)
BOOTROM_END_ADDRESS         = {
                                  CHIP_ID__S6J311EJ     : 0xffff12f8,
                                  CHIP_ID__S6J320CQX    : 0xffff1334,
                                  CHIP_ID__S6J326xx     : 0xFFFF12F8,
                                  CHIP_ID__S6J32Dxx     : 0xFFFF12F8,
                              }

# ARM CoreSight related definitions
REG_APB__CPU_DBGDSCR        = 0x80090088 # CoreSight CPU Debug component, Debug Status and Control Register
MASK__CPU_DBGDSCR_HALTED    = 0x00000001
REG_APB__CSTF_CTL           = 0x80004000 # CoreSight Trace Funnel Control Register
VALUE__CSTF_CTL             = 0x000003ff

# Other definitions
BLACKLIST_FILENAME          = {
                                  CHIP_ID__S6J311EJ     : "S6J3110_GHS_BlackRegister_script.rc",
                                  CHIP_ID__S6J320CQX    : "S6J320CQX_GHS_BlackRegister_script.rc",
                                  CHIP_ID__S6J326xx     : "S6J3200_GHS_BlackRegister_script.rc",
                                  CHIP_ID__S6J32Dxx     : "S6J3200_GHS_BlackRegister_script.rc",
                              }

############################## END OF DEFINITIONS ########################################


############################## START OF FUNCTIONS ########################################
import sys
import time
import re

# Helper functions

# Executes a debugger command
def ExecDebugCmd(cmd_string, overwrite_print=False):
    debugger.RunCommands(cmd_string, printOutput=(ENABLE_DEBUG_COMMAND_OUTPUT or overwrite_print))

# Returns the execution output string from the last executed debugger command
def GetDebugCmdOutput():
    return debugger.cmdExecOutput

# Reads 32-bit via the CoreSight AHB-AP, returns None on read error
def ReadViaAhb(address):
    ExecDebugCmd("target rr ahb[" + hex(address) + "]")
    return _read_check(address)

# Reads 32-bit via the CoreSight APB-AP (debug bus), returns None on read error
def ReadViaApb(address):
    ExecDebugCmd("target rr apb[" + hex(address) + "]")
    return _read_check(address)

# Don't call directly! Generic read output message parsing function
def _read_check(address):
    read_value = None
    # Check if output messages contain the "error" string which indicates a read error
    if GetDebugCmdOutput().lower().find("error") == -1:
        # Extracts the read value from the output message of type e.g. "ahb[0xb0608048]=0x00000003"
        try:
            read_value = int(GetDebugCmdOutput().split('=')[1], 0)
        except:
            pass # Keep pre-assigned value
    return read_value

# Writes 32-bit via the CoreSight AHB-AP, returns True on success and False on error
def WriteViaAhb(address, value):
    ExecDebugCmd("target rw ahb[" + hex(address) + "] " + hex(value))
    return _write_check()

# Writes 32-bit via the CoreSight APB-AP (debug bus), returns True on success and False on error
def WriteViaApb(address, value):
    ExecDebugCmd("target rw apb[" + hex(address) + "] " + hex(value))
    return _write_check()

# Don't call directly! Generic write output message parsing function'''
def _write_check():
    write_success = True
    # Check if output messages contain the "error" string which indicates a write error
    if (GetDebugCmdOutput().lower().find("error") != -1):
        write_success = False
    return write_success

# Exits the script with an error return value and optionally prints a message
def ExitScriptWithError(message=""):
    print(message)
    sys.exit(1)


#-----------------------------------------------------------------------------------------
# Traveo debug & connection functions

# Returns the value of the Chip-ID register SYSC0_SYSIDR
current_mcu_series = None  # "Static" variable for function GetMcuSeries(), manually assign CHIP_ID here if automatic detection fails
def GetMcuSeries():
    global current_mcu_series
    # Only access the HW register if it has not already been read
    if current_mcu_series is None:
        sysidr_value = ReadViaAhb(REG_AHB__SYSC0_SYSIDR)
        if sysidr_value is None:
            ExitScriptWithError("Could not read Chip-ID from SYSC0_SYSIDR!")
        current_mcu_series = sysidr_value & 0xFFFF0000
    return current_mcu_series


# Prepare important probe settings
def SetProbeConfig():
    debugger.Disconnect(printOutput=ENABLE_DEBUG_COMMAND_OUTPUT)
    debugger.ConnectToTarget("mpserv", moreOpts="-usb")
    # Change target and reconnect if current probe target setting does not match expected target setting
    expected_target_string = " other(5,0x1f,1) cortexr5f"
    ExecDebugCmd("target set target")
    actual_target_string = GetDebugCmdOutput().split('=')[1]
    if expected_target_string != actual_target_string:
        ExecDebugCmd("target set target " +  expected_target_string)   # set target
        debugger.Disconnect(printOutput=ENABLE_DEBUG_COMMAND_OUTPUT)
        debugger.ConnectToTarget("mpserv", moreOpts="-usb")
    # --- Generic options ---
    ExecDebugCmd("target set adapter                auto       ")   # Auto detection of probe adapter
    ExecDebugCmd("target set checker                on         ")   # Polls target status
    ExecDebugCmd("target set endianness             little     ")   # ARM is little endian
    ExecDebugCmd("target set logic_high             3.3        ")   # I/O interface voltage
    ExecDebugCmd("target set power_detect           on         ")   # Power detection
    ExecDebugCmd("target set prm_ignore_disconnect  off        ")   # Probe Run Mode proxy exits on disconnection
    ExecDebugCmd("target set prm_ignore_reset       off        ")   # Probe Run Mode proxy exits if probe resets target
    ExecDebugCmd("target set single_mpserv_only     off        ")   # Allow multiple mpserv connections
    ExecDebugCmd("target set rst_pulse              10         ")   # Set reset pulse length in ms
    ExecDebugCmd("target set rst_settle             10         ")   # Set wait time after reset in ms
    ExecDebugCmd("target set jrst_pulse             10         ")   # Set JTAG reset pulse length
    ExecDebugCmd("target set jrst_settle            10         ")   # Set wait time after JTAG reset in ms
    ExecDebugCmd("target set target_reset_pin       freezes_tap")   # While MCU is in reset, JTAG inputs are disabled, outputs are low
    ExecDebugCmd("target set clock                  8MHz       ")   # Set JTAG clock speed
    # --- ARM specific options ---
    ExecDebugCmd("target set etm_arch_version       3.3        ")   # Version of the Embedded Trace Macrocell
    ExecDebugCmd("target set use_swd                off        ")   # Do not use single wire interface
    ExecDebugCmd("target set use_rtck               off        ")   # Do not use adaptive JTAG clock
    ExecDebugCmd("target set cortex_addr            0x80090000 ")   # Set base addresses for CoreSight IPs although ROM table is correct
    ExecDebugCmd("target set etm_addr               0x8009c000 ")   # Set base addresses for CoreSight IPs although ROM table is correct
    ExecDebugCmd("target set tpiu_addr              0x80003000 ")   # Set base addresses for CoreSight IPs although ROM table is correct

    # --- Super Trace Probe specific options ---
    if IsSuperTraceProbe() is True:
        ExecDebugCmd("target set trace_clock_source    normal  ")   # The clock on the interface shall be used for capturing data


# Resets the MCU via its RSTX pin
def ResetMcuViaRstxPin(msg="Reset target via RSTX"):
    if msg is not None:
        print(msg)
    ExecDebugCmd("target tr r")


# Returns the value of SCCFG_STAT2 register after DBGRDY bit has been set
# because only then the content reflects the actual security configuration
def GetStat2RegVal():
    attempts = 10
    while attempts != 0:
        attempts = attempts - 1
        stat2_value = ReadViaApb(REG_APB__SCCFG_STAT2)
        if stat2_value is None:
            ExitScriptWithError("SCCFG_STAT2 could not be read!")
        elif attempts == 0:
            ExitScriptWithError("Time-out occurred while waiting for SCCFG_STAT2_DBGRDY == 1!")
        else:
            if ((stat2_value & MASK__SCCFG_STAT2_DBGRDY) != 0):
                break
    return stat2_value


# Checks if the MCU is secured and tries to unlock it by entering the configured user key to
# the Security Checker registers. After entering the key it is checked that the MCU was
# successfully unlocked.
def UnlockDevice():
    stat2_value = GetStat2RegVal()
    # Check if MCU is secured
    if ((stat2_value & MASK__SCCFG_STAT2_SECEN) != 0):
        # If MCU had been unlocked by a prior call to this function or by SW in the MCU, there is nothing to do
        if stat2_value == (MASK__SCCFG_STAT2_SECEN | MASK__SCCFG_STAT2_DBGRDY):
            print("MCU still unlocked")
        # Otherwise try to unlock the MCU
        else:
            # Write the security key (needs unlocking of the registers as well)
            WriteViaApb(REG_APB__SCCFG_UNLCK, KEY__SCCFG_UNLOCK)                    # Unlock SCCFG registers
            WriteViaApb(REG_APB__SCCFG_SECKEY0      , SECURITY_KEY_BYTES_0_TO_3)    # Write key to Security Checker
            WriteViaApb(REG_APB__SCCFG_SECKEY0 + 0x4, SECURITY_KEY_BYTES_4_TO_7)    # Write key to Security Checker
            WriteViaApb(REG_APB__SCCFG_SECKEY0 + 0x8, SECURITY_KEY_BYTES_8_TO_11)   # Write key to Security Checker
            WriteViaApb(REG_APB__SCCFG_SECKEY0 + 0xc, SECURITY_KEY_BYTES_12_TO_15)  # Write key to Security Checker
            WriteViaApb(REG_APB__SCCFG_UNLCK, KEY__SCCFG_LOCK)                      # Lock SCCFG registers
            # Read SCCFG_STAT2 again to check success of unlocking
            stat2_value = GetStat2RegVal()
            print("SCCFG_STAT2:  " + hex(stat2_value) + "  (after unlock attempt)")
            # Keep only relevant bits
            stat2_value = stat2_value & (MASK__SCCFG_STAT2_SECEN | MASK__SCCFG_STAT2_SECLOCK | MASK__SCCFG_STAT2_SEC)
            # If SECEN and SECLOCK are set, the key was wrong
            if stat2_value == (MASK__SCCFG_STAT2_SECEN | MASK__SCCFG_STAT2_SECLOCK):
                ExitScriptWithError("Invalid security key entered!")
            # If only the SECEN bit is set, the key was correct.
            elif stat2_value == MASK__SCCFG_STAT2_SECEN:
                print("Correct security key entered, MCU unlocked")
            # Should not be reached
            else:
                ExitScriptWithError("Device still secured")


# Activates the masking of the watchdog reset
def SetWdgResetMask():
    # Read-modify-write, unlock of registers required
    reg_val = ReadViaApb(REG_APB__SCSCU_CNTL)
    reg_val = reg_val | MASK__SCSCU_CNTL_WDGRSTMASK
    WriteViaApb(REG_APB__SCCFG_UNLCK, KEY__SCCFG_UNLOCK) # Unlock SCCFG registers
    WriteViaApb(REG_APB__SCSCU_CNTL, reg_val)            # Set SCSCU_CNTL.WDG_RST_MASK bit
    WriteViaApb(REG_APB__SCCFG_UNLCK, KEY__SCCFG_LOCK)   # Lock SCCFG registers


# Configures special debug features like HW WDG reset masking or fake power/clock on
def SetSpecialDebugFeatures():
    reg_value = MASK__SCSCU_CNTL_JTAGCON
    msg_features = ""
    msg = "Setting special debug features: "

    if DBG_MASK_WDG_RESET is True:
        msg_features = msg_features + "HW/SW Watchdog Reset Mask, "
        reg_value = reg_value | MASK__SCSCU_CNTL_WDGRSTMASK
    if DBG_ENABLE_FAKEPOWERON is True:
        msg_features = msg_features + "Fake Power On Mode, "
        reg_value = reg_value | MASK__SCSCU_CNTL_FAKE_PDON
    if DBG_ENABLE_FAKECLOCKON is True:
        msg_features = msg_features + "Fake Clock On Mode, "
        reg_value = reg_value | MASK__SCSCU_CNTL_FAKE_CLKON

    if msg_features == "":
        print(msg + "none")
    else:
        print(msg + msg_features.rstrip(", ")) # Print features with trailing feature separator removed

    WriteViaApb(REG_APB__SCCFG_UNLCK, KEY__SCCFG_UNLOCK) # Unlock register write access
    WriteViaApb(REG_APB__SCSCU_CNTL, reg_value)          # Make user configuration (SCSCU_CNTL_JTAGCON bit and others)
    WriteViaApb(REG_APB__SCCFG_UNLCK, KEY__SCCFG_LOCK)   # Lock register write access again


# Returns the current halted state of the CPU
# Replaces debugger.IsHalted() because this function is unreliable and only returns the assumed state of the GHS debugger process
def IsCoreHalted():
    reg_val = ReadViaApb(REG_APB__CPU_DBGDSCR)
    if reg_val is None:
        # If register currently is not readable the security bridge may still be closed
        # so it is assumed the CPU is still running
        return False
    elif ((reg_val & MASK__CPU_DBGDSCR_HALTED) == 0):
        return False
    else:
        return True


# Repeatedly tries to halt the core and waits until it is halted (with time-out)
def HaltCore():
    attempts = 10
    while IsCoreHalted() is False:
        ExecDebugCmd("target th")  # Halt CPU
        attempts = attempts - 1
        if attempts == 0:
            ExitScriptWithError("Time-out occurred while trying to halt the core!")


# Return current PC on success or None on error
def GetCurrentPc():
    # Get current "real" PC (using low-level target function) and not the assumed PC of the GHS debugger process
    ExecDebugCmd("target rr pc")
    try:
        current_pc = int(GetDebugCmdOutput().split('=')[1], 0)
    except:
        current_pc = None
    return current_pc


# Sets a low-level breakpoint to the specified address
# (GHS high-level debugger process will not be aware of this breakpoint)
def SetBreakpointLowLevel(address):
    # Delete this potentially already set breakpoint to avoid script errors before trying to set it
    DeleteBreakpoint(address)
    ExecDebugCmd("target bs x " + hex(address))
    if (GetDebugCmdOutput().lower().find("error") != -1):
        ExitScriptWithError("Could not set low level HW breakpoint!")


# Checks if a HW breakpoint is already set to the passed address and deletes it
# (GHS high-level debugger process will not be aware of this breakpoint)
def DeleteBreakpointLowLevel(address):
    try:
        # Generate the low-level output with a list of all set breakpoints
        ExecDebugCmd("target bl")
        bp_list = GetDebugCmdOutput().splitlines()
        # Parse the breakpoint list, below is an example how the list can look like:
        #  0   x 0xffff1334i/0xfffffffci
        #  1   x 0x00a00000i/0xfffffffci

        for entry in bp_list:
            matched_strings = re.search(r'([0-9]+)[ ]+x[ ]+(0x[0-9a-fA-F]+)', entry)
            # if pattern is not found it is either some watchpoint or a SW breakpoint
            if matched_strings is not None:
                breakpoint_address = int(matched_strings.group(2), 0)
                # If the breakpoint address matches the one of the address passed to this function, the breakpoint
                # is deleted using its handle (entry number in breakpoint list) and parsing ends
                if breakpoint_address == address:
                    bp_handle = matched_strings.group(1)
                    ExecDebugCmd("target bc " + bp_handle)
                    break
    except:
        ExitScriptWithError("Parsing of low-level breakpoint list failed!")


# Sets a breakpoint to the specified label (must be a string), format supported are described in the GHS debugger command reference manual
def SetBreakpoint(label_or_address, breakpoint_hit_command="{}"):
    try:
        # Argument is entered in the debugger to resolve the address in case it was a label (e.g. _start#9)
        ExecDebugCmd(label_or_address)
        # Test output format conversion to integer
        # Style 1 -->      MULTI> _start#9
        #                  0x2000958
        # Style 2 -->      MULTI> _start
        #                  &_start = 0x2000958 = _start()
        try:
            address = int(GetDebugCmdOutput(), 0) # Style 1
        except:
            address = int(GetDebugCmdOutput().split('=')[1], 0) # Style 2
        label = label_or_address
    except:
        address = label_or_address
        label = hex(label_or_address)
    # Delete this potentially set breakpoint to avoid script errors before trying to set it
    DeleteBreakpoint(address)
    ExecDebugCmd("hardbrk enabled execute " + label + breakpoint_hit_command)


# Checks if a HW breakpoint is already set to the passed address and deletes it
def DeleteBreakpoint(address):
    try:
        # Generate the output with a list of all set breakpoints
        ExecDebugCmd("hardbrk")
        bp_list = GetDebugCmdOutput().splitlines()
        # Parse the breakpoint list, below is an example how the list can look like:
        #       1    x      "crt0.arm"#_start#9:4 count:1
        #       2    x      0xffff12f8:4 count:1

        bp_handle = 0
        for entry in bp_list:
            breakpoint_address = 0
            match_str_type1 = re.search(r'#([\w#]+)', entry)
            # In case of a type 0xffff12f8:4 count:1
            if match_str_type1 is None:
                match_str_type2 = re.search(r'(0x\w+)', entry)
                breakpoint_address = int(match_str_type2.group(1), 0)
            # In case of a type "crt0.arm"#_start#9:4 count:1
            else:
                bp_label = match_str_type1.group(1)
                # The bp_label (e.g. _start#9) is entered in the debugger to resolve the address
                ExecDebugCmd(bp_label)
                breakpoint_address = int(GetDebugCmdOutput(), 0)
            # If the breakpoint address matches the one of the address passed to this function, the breakpoint
            # is deleted using its handle (entry number in breakpoint list) and parsing ends
            if breakpoint_address == address:
                ExecDebugCmd("hardbrk delete=" + str(bp_handle))
                break
            bp_handle = bp_handle + 1
    except:
        # Function just returns on parsing errors
        # This is not regarded as critical (e.g. if GHS changes output messages in newer versions)
        print("Parsing of breakpoint list failed!")


# Ensures that at least 1 HW instruction breakpoint is free to be used by the reset flow
def EnsureFreeHwBreakpoint():
    # Preset debugger variable
    ExecDebugCmd("$BP_HANDLE_TO_BE_RESTORED = -1")
    try:
        # Generate the output with a list of all set breakpoints
        ExecDebugCmd("hardbrk")
        bp_list = GetDebugCmdOutput().splitlines()
        # Parse the breakpoint list, below is an example how the list can look like:
        #       1    x      "crt0.arm"#_start#9:4 count:1
        #       2    x      0xffff12f8:4 count:1
        #       3    x      "crt0.arm"#_start#22:4 count:1 (inactive)

        active_instr_hw_bp_count = 0
        for entry in bp_list:
            # only check the active breakpoints
            if entry.lower().find("inactive") == -1:
                matched_strings = re.search(r'[ ]+([0-9]+)[ ]+x[ ]+', entry)
                # only count instruction breakpoints (indicated by 'x' in the list)
                if matched_strings is not None:
                    active_instr_hw_bp_count = active_instr_hw_bp_count + 1;
                    # remember the current handle,
                    last_active_bp_handle = matched_strings.group(1)
        # Traveo supports 8 HW instruction breakpoints
        if active_instr_hw_bp_count >= 8:
            # Disable a HW breakpoint and remember the handle as debugger variable, will be restored if script is processed again after reset
            ExecDebugCmd("tog off hbp " + str(last_active_bp_handle))
            ExecDebugCmd("$BP_HANDLE_TO_BE_RESTORED = " + str(last_active_bp_handle))
    except:
        ExitScriptWithError("Ensuring of free HW breakpoint for reset flow failed!")


# If the script had to disable one of the user breakpoints this functions restores it
def RestoreUserHwBreakpoint():
    try:
        ExecDebugCmd("$BP_HANDLE_TO_BE_RESTORED")
        bp_handle = int(GetDebugCmdOutput().split('=')[1], 0)
        if bp_handle != -1:
            ExecDebugCmd("tog on hbp " + str(bp_handle))
            ExecDebugCmd("$BP_HANDLE_TO_BE_RESTORED = -1")
    except:
        ExitScriptWithError("Restoring of HW breakpoint of user failed!")


# In case of a RAM build, the program entry address the BootROM is using must be patched
def PatchBranchAddress():
    print("Patch branch address of BootROM (_start symbol) due to RAM build configuration")
    # After having stopped at BOOTROM_END_ADDRESS, the LR holds the application entry vector
    ExecDebugCmd("$LR = _start")


# Checks whether a GHS Super Trace Probe is currently connected
def IsSuperTraceProbe():
    # The following will do a rudimentary check for a Super Trace Probe
    ExecDebugCmd("__tracearchid")
    try:
        trace_architecture_id = int(GetDebugCmdOutput(), 0)
    except:
        trace_architecture_id = -1
    if trace_architecture_id >= 0:
        return True
    else:
        return False

# Enables all trace funnel sources if a GHS Trace Probe was detected
# Already releases the I/O reset of the 3V and 3V/5V domain, so that startup code can be traced
def SetupTrace():
    # TODO: configure Embedded Trace Buffer if there is no Super Trace Probe
    if IsSuperTraceProbe() is True:
        print("Setting up and enabling trace")
        ExecDebugCmd("trace disable")
        # Clear 3.3V and 5V I/O-Reset bits
        reg_value = ReadViaAhb(REG_AHB__SYSC0_SPECFGR)
        WriteViaAhb(REG_AHB__SYSC0_PROTKEYR, KEY__SYSC0_UNLOCK)
        WriteViaAhb(REG_AHB__SYSC0_SPECFGR, reg_value & (~(MASK__SYSC0_SPECFGR_IOxRSTC)))
        # Enable CoreSight Trace Funnel slave ports
        WriteViaApb(REG_APB__CSTF_CTL, VALUE__CSTF_CTL)
        ExecDebugCmd("trace enable")
        ExecDebugCmd("trace clear")


# ECC bits of RAM need to be initialized before downloading code/data to it
def InitializeRamEcc(start_address, size_in_bytes):
    ExecDebugCmd("target mf " + hex(start_address) + " " + hex(size_in_bytes) +" 0x00000000")


# In case of RAM builds the BootROM and security HW still utilize the marker settings that are flashed on the MCU
# This functions compares the flashed markers with those configured by the RAM build application and warns the user
# in case of any mismatch. BDR is skipped because it is usually always different between RAM and Flash build configuration
def CompareFlashMarkers():
    try:
        ExecDebugCmd("&MK_SECTION_START")
        dummy_mk_address = int(GetDebugCmdOutput().split('=')[1], 0)
        ExecDebugCmd("&DDR_SECTION_START")
        dummy_ddr_address = int(GetDebugCmdOutput().split('=')[1], 0)
        ExecDebugCmd("&WDR_SECTION_START")
        dummy_wdr_address = int(GetDebugCmdOutput().split('=')[1], 0)
        ExecDebugCmd("((unsigned long) &MK_SECTION_END) - ((unsigned long) &MK_SECTION_START)")
        dummy_mk_size = int(GetDebugCmdOutput(), 0)
        ExecDebugCmd("((unsigned long) &DDR_SECTION_END) - ((unsigned long) &DDR_SECTION_START)")
        dummy_ddr_size = int(GetDebugCmdOutput(), 0)
        ExecDebugCmd("((unsigned long) &WDR_SECTION_END) - ((unsigned long) &WDR_SECTION_START)")
        dummy_wdr_size = int(GetDebugCmdOutput(), 0)

        ExecDebugCmd("compareb != " + hex(FLASH_MK_BASE_ADDRESS_AXI) + " " + hex(dummy_mk_address) + " " + hex(dummy_mk_size))
        if GetDebugCmdOutput() != "":
            print("WARNING: The current content of the .MK flash marker section does not match the configured markers!")
        ExecDebugCmd("compareb != " + hex(FLASH_DDR_BASE_ADDRESS_AXI) + " " + hex(dummy_ddr_address) + " " + hex(dummy_ddr_size))
        if GetDebugCmdOutput() != "":
            print("WARNING: The current content of the .DDR flash marker section does not match the configured markers!")
        ExecDebugCmd("compareb != " + hex(FLASH_WDR_BASE_ADDRESS_AXI) + " " + hex(dummy_wdr_address) + " " + hex(dummy_wdr_size))
        if GetDebugCmdOutput() != "":
            print("WARNING: The current content of the .WDR flash marker section does not match the configured markers!")
    except:
        print("Could not compare Flash marker content with dummy sections")

        
# Initializes RAM ECC of the .syscall location (8 bytes = 2 ARM instructions --> "NOP" or SW breakpoint, and BX LR),
# because GHS will read from there before writing to it during the program download
def InitRamSyscallSection():
    try:
        ExecDebugCmd(".syscall")
        syscall_section_start = int(GetDebugCmdOutput(), 0)        
        ExecDebugCmd("target mw 4 " + hex(syscall_section_start)     + " 0")
        ExecDebugCmd("target mw 4 " + hex(syscall_section_start + 4) + " 0")
    except:
        ExecDebugCmd("target syscalls off")

        
# Program download to RAM
def DownloadToRam():
    # Initialize ECC before downloading program
    if CURRENT_BUILD == BUILD_SYSRAM:
        print("Initializing SYSRAM ECC...")
        InitializeRamEcc(SYSTEM_RAM_START_ADDRESS, SYSTEM_RAM_SIZE_BYTES[GetMcuSeries()])
    elif CURRENT_BUILD == BUILD_TCMRAM:
        print("Initializing TCMRAM ECC...")
        InitializeRamEcc(TCMRAM_START_ADDRESS, TCMRAM_SIZE_BYTES[GetMcuSeries()])
    elif CURRENT_BUILD == BUILD_VRAM:
        # VRAM ECC is disabled by default, so there is no need to initialize the RAM, unless
        # constant data in the unused areas shall be ensured (e.g. to debug sporadic SW bugs)
        # print("Initializing VRAM ECC...")
        # InitializeRamEcc(VRAM_START_ADDRESS, VRAM_SIZE_BYTES[GetMcuSeries()])
        pass
    print("Application is linked for RAM, downloading application...")
    ExecDebugCmd("prepare_target -load -nosave", True)


# Program write to Flash
def ProgramOrVerifyFlash():
    if ENABLE_FLASH_PROGRAMMING is True:
        # SYSRAM ECC must be initialized because it is used by GHS to download the Flash programming kernel
        print("Initializing SYSRAM ECC for kernel download...")
        InitializeRamEcc(SYSTEM_RAM_START_ADDRESS, SYSTEM_RAM_SIZE_BYTES[GetMcuSeries()])
        print("Application is linked for Flash, programming application...")

        label_address = debugger.GetSymbolAddress("_start")
        # Program code via TCM
        if label_address >= FLASH_BASE_ADDRESS_TCM and label_address < FLASH_BASE_ADDRESS_AXI:
            base_address = FLASH_BASE_ADDRESS_TCM
        # Program code via AXI
        else:
            base_address = FLASH_BASE_ADDRESS_AXI

        ExecDebugCmd("flash burn -baseaddress=" + hex(base_address) +
                               " -rambase="     + hex(SYSTEM_RAM_START_ADDRESS) +
                               " -memrequire="  + str(SYSTEM_RAM_SIZE_BYTES[GetMcuSeries()] // 1024), True)
    else:
        print("Application is linked for Flash, only verifying target memory...")
        ExecDebugCmd("prepare_target -verify=complete -nosave", True)


# Halts the CPU and sets a breakpoint at the BootROM end address so that CPU
# will stop there when the reset is triggered.
def PrepareMcuBeforeReset():
    HaltCore()

    # One HW breakpoint is required for the reset flow
    EnsureFreeHwBreakpoint()

    # A low-level breakpoint needs to be set, because a high-level breakpoint is
    # set by the debugger in the MCU register only when the process continues (command "c")
    # But if this command is executed while "prepare_target"/"flash burn" has not yet
    # been executed, GHS tries to download the program. This shall be avoided.
    SetBreakpointLowLevel(BOOTROM_END_ADDRESS[GetMcuSeries()])


# Checks whether the CPU has really stopped at the BootROM end address after reset
# and continues the preparation of the target MCU for debugging.
# In case of preparation for program download/flashing/verification (indicated by
# parameter "init_for_program_download") the init sequence can be shortened
def PrepareMcuAfterReset(init_for_program_download):
    # MCU would be locked again after reset if security is enabled
    UnlockDevice()

    # Check that the CPU has really stopped at the end of BootROM
    if IsCoreHalted() is False:
        ExitScriptWithError("Core has not halted after setting breakpoint to BootROM end address and reset. Try again (or restart debug session)!")
    if GetCurrentPc() != BOOTROM_END_ADDRESS[GetMcuSeries()]:
        ExitScriptWithError("Core has halted but not at BootROM end address. Try again (or restart debug session)!")

    # Breakpoint for stopping at BootROM end address is no longer required
    DeleteBreakpointLowLevel(BOOTROM_END_ADDRESS[GetMcuSeries()])
    # Restores the user breakpoint if one had been disabled by the script
    RestoreUserHwBreakpoint()

    # Preparations for debugging
    if init_for_program_download is False:

        SetSpecialDebugFeatures()

        SetupTrace()

        if CURRENT_BUILD != BUILD_FLASH:
            PatchBranchAddress()

        print("Setting HW breakpoint to '" + BREAKPOINT_LABEL + "' label")
        # The breakpoint command triggers MULTI to activate syscalls by placing a SW breakpoint to
        # the .syscall section. This only works if BREAKPOINT_LABEL is set to main() or later in the
        # execution flow, otherwise the SW breakpoint will be overwritten by the start-up code.
        SetBreakpoint(BREAKPOINT_LABEL, "{ target just_did_rom_to_ram_copy }")

        print("Go!")  # go to configured user breakpoint
        ExecDebugCmd("c")


############################## END OF FUNCTIONS ##########################################


############################## START OF SCRIPT ###########################################

# Probably only works on Windows, other systems may return the scriptname only according to Python documentation
SCRIPTNAME_WITH_PATH = sys.argv[0]

# Determine current build type (GHS variables are set by build-related .rc files)
try:
    ExecDebugCmd("$BUILD_FLASH")
    BUILD_FLASH = int(GetDebugCmdOutput().split('=')[1], 0)
    ExecDebugCmd("$BUILD_SYSRAM")
    BUILD_SYSRAM = int(GetDebugCmdOutput().split('=')[1], 0)
    ExecDebugCmd("$BUILD_TCMRAM")
    BUILD_TCMRAM = int(GetDebugCmdOutput().split('=')[1], 0)
    ExecDebugCmd("$BUILD_VRAM")
    BUILD_VRAM = int(GetDebugCmdOutput().split('=')[1], 0)
    ExecDebugCmd("$CURRENT_BUILD")
    CURRENT_BUILD = int(GetDebugCmdOutput().split('=')[1], 0)
except:
    ExitScriptWithError("Could not determine CURRENT_BUILD or related build setting variables!")
if CURRENT_BUILD not in [BUILD_FLASH, BUILD_SYSRAM, BUILD_TCMRAM, BUILD_VRAM]:
    ExitScriptWithError("Unknown CURRENT_BUILD setting!")

# Determine execution mode (which is the last parameter passed to the Python script)
last_parameter = sys.argv[-1]
if last_parameter in ["PROGRAM_DOWNLOAD", "BEFORE_RESET", "AFTER_RESET"]:
    EXECUTION_MODE = last_parameter
else:
    ExitScriptWithError("Unknown EXECUTION_MODE setting!")

#-----------------------------------------------------------------------------------------
if EXECUTION_MODE == "PROGRAM_DOWNLOAD":
    # Ensure probe is correctly configured for debugging Traveo Cortex-R5(F)
    SetProbeConfig()

    # Set hook functions, so that this script is executed on certain user interactions
    ExecDebugCmd("clearhooks") # Avoid potential multiple definitions of the same hook functions by clearing them all
    ExecDebugCmd("addhook -before reset { python -b -f " + SCRIPTNAME_WITH_PATH + " \"BEFORE_RESET\" }")
    ExecDebugCmd("addhook -after reset  { python -b -f " + SCRIPTNAME_WITH_PATH + " \"AFTER_RESET\"  }")

    # Reset but hide message, this reset is just to have a more or less known state
    ResetMcuViaRstxPin(None)

    # Unlock a potentially security locked MCU
    # Note: if MCU is locked without any valid SW (--> causing cyclic resets) it may be impossible
    # to connect to the MCU due to timing reasons, please use serial programmer then to erase the MCU
    UnlockDevice()

    # Ensure that the GHS download/programming SW is executed after a known reset state
    print("Preparing MCU for program download/flashing/verification")
    PrepareMcuBeforeReset()
    ResetMcuViaRstxPin()
    PrepareMcuAfterReset(True)

    # Mask watchdog reset, so that e.g. Flash kernel does not need to handle it
    SetWdgResetMask()

    # Initializes the ECC of the .syscall section (8 bytes) in RAM because GHS download fails if RAM is not initialized
    # (which is likely the case after power on with empty flash). Probably GHS tries to read the address before trying
    # to set its SW breakpoint. Setting "target syscalls off" at this time is no solution because it should be enabled 
    # later in the script again and then GHS would print some error message in the log which shall be avoided to not confuse the user
    InitRamSyscallSection()
    
    # Build type specific operation to prepare the target for debugging
    if CURRENT_BUILD == BUILD_FLASH:
        ProgramOrVerifyFlash()
    else:
        DownloadToRam()
        CompareFlashMarkers()

    if APPLY_BLACKLIST is True:
        print("Applying black list (this may take some time)...")        
        ExecDebugCmd("< " + os.path.split(SCRIPTNAME_WITH_PATH)[0] + "\\" + BLACKLIST_FILENAME[GetMcuSeries()])
        

    # --- Now that download/flashing/verification of program has finished, the standard connection flow shall be executed ---
    PrepareMcuBeforeReset()
    ResetMcuViaRstxPin()
    PrepareMcuAfterReset(False)


#-----------------------------------------------------------------------------------------
elif EXECUTION_MODE == "BEFORE_RESET":
    print("=> START OF HOOK: <before reset>")

    print("Preparing target reset")
    PrepareMcuBeforeReset()

    print("=> END OF HOOK: <before reset>")

#-----------------------------------------------------------------------------------------
elif EXECUTION_MODE == "AFTER_RESET":
    print("=> START OF HOOK: <after reset>")

    PrepareMcuAfterReset(False)

    print("=> END OF HOOK: <after reset>")


############################## END OF SCRIPT #############################################
