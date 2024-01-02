#include <stdio.h>
#include <string.h>

int main() {

    char arr[100][100] = {};
    char temp[100];
    int ascii1, ascii2;
    int j, n;

    scanf("%d", &n);
    for (j = 0;j < n;j ++)
        scanf("%s", arr[j]);

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (strlen(arr[j]) > strlen(arr[j + 1])) {
                strncpy(temp, arr[j + 1], strlen(arr[j + 1]));
                temp[strlen(arr[j + 1])] = '\0';

                strncpy(arr[j + 1], arr[j], strlen(arr[j]));
                arr[j + 1][strlen(arr[j])] = '\0';

                strncpy(arr[j], temp, strlen(arr[j + 1]));
                arr[j][strlen(arr[j + 1])] = '\0';
            }

            ascii1 = 0, ascii2 = 0;
            if (strlen(arr[j]) == strlen(arr[j + 1])) {
                for (int i = 0; i < strlen(arr[j]); i++) {
                    ascii1 += arr[j][i];
                }

                for (int i = 0; i < strlen(arr[j + 1]); i++) {
                    ascii2 += arr[j + 1][i];
                }

                if (ascii1 > ascii2) {

                    strncpy(temp, arr[j + 1], strlen(arr[j + 1]));
                    temp[strlen(arr[j + 1])] = '\0';

                    strncpy(arr[j + 1], arr[j], strlen(arr[j]));
                    arr[j + 1][strlen(arr[j])] = '\0';

                    strncpy(arr[j], temp, strlen(arr[j + 1]));
                    arr[j][strlen(arr[j + 1])] = '\0';
                }
            }
        }
    }
        
    for (j = 0;j < n;j ++)
        printf("%s\n", arr[j]);

}