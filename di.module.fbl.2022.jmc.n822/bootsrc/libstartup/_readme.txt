
	Green Hills Software Low-Level Startup Library Source

These source files contain low level routines that can be customized for the
user's target environment.

The Green Hills Building Applications manual contains a section, "Customizing
the Run-Time Environment Libraries and Object Modules," that describes
in detail the runtime environment and library system implemented by these
modules.

These source files are built into two binary files that are typically
included in the architecture-specific library directories: libstartup.a
and crt0.o. These objects are linked with the application when building
a stand-alone embedded application.

crt0.o is a the startup or initialization module and contains the
routine _start() that is the usual default entry point for applications.
crt0.o is built from assembly source. _start() performs basic setup such as
initializing the stack pointer and registers, and then passes control to 
libstartup.a for further initialization. 

libstartup.a is the low-level startup library. This library performs
ROM-to-RAM copying, if configured to do so, and then transfers control to
the libsys.a low-level system library.
