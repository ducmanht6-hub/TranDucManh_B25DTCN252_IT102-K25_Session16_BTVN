#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "hello world"; 
    char symbol;
    int i, j;

    printf("Chuoi ban dau: %s\n", str);

    printf("Nhap vao ky tu can xoa: ");
    scanf("%c", &symbol); 

    for (i = 0, j = 0; i < strlen(str); i++) {
        if (str[i] != symbol && str[i] != symbol - 32 && str[i] != symbol + 32) {  
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", symbol, str);

    return 0;
}

