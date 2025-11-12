#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "bcdac"; 
    int i, j;
    int count;
    int countedNumber[256] = {0};  

    printf("Chuoi da khai bao: %s\n", str);
    printf("\nSo lan xuat hien cua tung ky tu:\n");

    for (i = 0; i < strlen(str); i++) {
        if (countedNumber[(unsigned char)str[i]] == 0) { 
            count = 1;
            for (j = i + 1; j < strlen(str); j++) {
                if (str[i] == str[j]) {
                    count++;
                }
            }
            printf("%c: %d\n", str[i], count);
            countedNumber[(unsigned char)str[i]] = 1;  
        }
    }

    return 0;
}

