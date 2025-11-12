#include <stdio.h>
#include <string.h>

int main() {
    char str[1000] = "hello world";
    int count = 0;
    int i;

    printf("Chuoi da khai bao: %s\n", str);

    if (strlen(str) > 0) {
        count = 1;
        for (i = 0; i < strlen(str) - 1; i++) {
            if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
                count++;
            }
        }
    }

    printf("So tu trong chuoi la: %d\n", count);

    return 0;
}

