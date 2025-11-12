#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Lap trinh C"; 
    char symbol;
    int count = 0;

    printf("Chuoi da khai bao: %s\n", str);

    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &symbol);

    // Duy?t chu?i và d?m s? l?n xu?t hi?n
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == symbol) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", symbol, count);

    return 0;
}

