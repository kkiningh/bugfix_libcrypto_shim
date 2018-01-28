#include <openssl/aes.h>
#include <openssl/md5.h>
#include <openssl/rand.h>

__asm__(".symver AES_ctr128_encrypt,AES_ctr128_encrypt@libcrypto.so.10");
__asm__(".symver AES_ecb_encrypt,AES_ecb_encrypt@libcrypto.so.10");
__asm__(".symver AES_set_decrypt_key,AES_set_decrypt_key@libcrypto.so.10");
__asm__(".symver AES_set_encrypt_key,AES_set_encrypt_key@libcrypto.so.10");
__asm__(".symver MD5,MD5@libcrypto.so.10");
__asm__(".symver RAND_bytes,RAND_bytes@libcrypto.so.10");
