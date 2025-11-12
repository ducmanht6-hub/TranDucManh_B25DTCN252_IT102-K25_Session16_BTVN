#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Hello my gmail is test123@gmail.com"; 

    int alphabet = 0, number = 0, special = 0;

    printf("Chuoi da khai bao: %s\n", str);

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {  
            alphabet++;
        } else if (isdigit(str[i])) { 
            number++;
        } else if (str[i] != ' '){ 
            special++;
        }
    }

    printf("So ky tu la chu cai: %d\n", alphabet);
    printf("So ky tu la chu so: %d\n", number);
    printf("So ky tu dac biet: %d\n", special);

    return 0;
}

