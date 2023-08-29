#include <stdio.h>
#include <string.h>
 
// The flag is hidden in this array (add this to URL)
char flag[] = {0x72, 0x65, 0x61, 0x6c, 0x5f, 0x66, 0x6c, 0x61, 0x67, 0x2e, 0x74, 0x78, 0x74};
 
// This function encrypts the flag using a simple XOR cipher
void encrypt_flag(char *flag) {
    int key = 42; // The key is a secret number
    for (int i = 0; i < strlen(flag); i++) {
        flag[i] ^= key; // XOR each byte with the key
    }
}
 
// This function prints the encrypted flag in hexadecimal format
void print_flag(char *flag) {
    for (int i = 0; i < strlen(flag); i++) {
        printf("%02x ", flag[i]); // Print each byte as two hex digits
    }
    printf("\n");
}
 
int main() {
    encrypt_flag(flag); // Encrypt the flag
    printf("The encrypted flag is:\n");
    print_flag(flag); // Print the encrypted flag
    return 0;
}
