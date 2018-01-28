bugfix_libcrypto_shim
===

Author: Kevin Kiningham

This library simply reexports some symbols in openssl (libcrypto.so) with a different symbol version (see Section 3.3 in [How To Write Shared Libraries](https://www.akkadia.org/drepper/dsohowto.pdf).)

This was done to workaround a mismatch between the symbols exported by the OpenSSL package on Ubuntu 16.04 and the symbols expected by Synopsys Sentaurus (specifically the "sprocess" binary).
