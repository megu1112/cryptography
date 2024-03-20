#include <stdio.h>
#include <string.h>

int main() {
    char ciphertext[] = "53‡‡†305))6*;4826)4‡.)4‡);806*;48†8¶60))85;;]8*;:‡*8†83 (88)5*†;46(;88*96*?;8)*‡(;485);5*†2:*‡(;4956*2(5*—4)8¶8* ;4069285);)6†8)4‡‡;1(‡9;48081;8:8‡1;48†85;4)485†528806*81 (‡9;48;(88;4(‡?34;48)4‡;161;:188;‡?;";
    char substitution[] = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789():;†‡¶—";
    char decrypted[strlen(ciphertext)];

    for (int i = 0; i < strlen(ciphertext); i++) {
        for (int j = 0; j < strlen(substitution); j++) {
            if (ciphertext[i] == substitution[j]) {
                decrypted[i] = j < 26 ? 'a' + j : (j < 52 ? 'A' + (j - 26) : (j < 62 ? '0' + (j - 52) : substitution[j]));
                break;
            }
        }
    }

    
    printf("Decrypted message: %s\n", decrypted);

    return 0;
}


