Installing rtf-converter
========================

To compile the converter, edit the Makefile to set the path:

```bash
make
```


Running rtf-converter
=====================

rtf-converter [-o outputfile] inputfile

e.g.

rtf-converter -o sample.html sample.rtf

Dependencies
============
The Makefile works with RedHat Linux and 
gcc version egcs-2.91.66 19990314/Linux (egcs-1.1.2 release)
kernel 2.2.14-5.0 #1 Tue Mar 7 20:53:41 EST 2000 i586 

ldd reports the following 
libstdc++-libc6.1-1.so.2 => /usr/lib/libstdc++-libc6.1-1.so.2 (0x4001b000)
	libm.so.6 => /lib/libm.so.6 (0x4005d000)
	libc.so.6 => /lib/libc.so.6 (0x4007a000)
	/lib/ld-linux.so.2 => /lib/ld-linux.so.2 (0x40000000)
