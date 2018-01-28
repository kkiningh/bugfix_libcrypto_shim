SHARED_LIB_PATH := /lib/x86_64-linux-gnu

libcrypto.so.10: crypto.o crypto.map
	gcc -shared -Wl,-soname,libcrypto.so.10 -Wl,-rpath,$(SHARED_LIB_PATH) -Wl,--version-script=crypto.map -lcrypto -o $@ crypto.o

crypto.o: crypto.c
	gcc -fpic -c -o $@ $^
