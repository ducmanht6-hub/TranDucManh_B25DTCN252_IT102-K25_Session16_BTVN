#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Lap trinh C"; 
    int i;

    printf("Chuoi da khai bao la: %s\n", str);
    printf("Cac ky tu trong chuoi: ");

    for (i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
        if (i < strlen(str) - 1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}

