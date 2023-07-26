# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {

    char str[10][1000], temp[1000];
    int j, k, i, flag, len1, len2, m, r;
    srand(time(NULL));

    for (j = 0; j < 10; j++) {
        i = rand() % 8 + 3;

        for (k = 0; k < i; k++) {
            if (rand() % 2) {
                str[j][k] = rand() % 26 + 'A';
            }
            else {
                str[j][k] = rand() % 26 + 'a';
            }
        }
        str[j][k] = '\0';
    }
    flag = 1;
    while (1 == 1) {
        flag = 0;

        for (j = 0; j < 9; j++) {
            for (len1 = 0; str[j][len1] != '\0'; len1++);
            for (len2 = 0; str[j][len2] != '\0'; len2++);
            m = (len1 < len2)? len1: len2;
            for (k = 0; k < m; k++) {
                if (str[j][k] < str[j + 1][k]) {
                    r = -1;
                    break;
                }
                else if (str[j][k] > str[j + 1][k]) {
                    r = 1;
                    break;
                }   

            }

            if (r == 1) {

                flag = 1;
                for (k = 0; k <= len1; k++) {
                    temp[k] = str[j][k];
                }
                for (k = 0; k <= len2; k++) {
                    str[j][k] = str[j + 1][k];
                }
                for (k = 0; k <= len1; k++) {
                    str[j + 1][k] = temp[k];
                }
            }
        }
        if (flag == 0) {
            if (len1 == len2) {
                r = 0;

            }
            else if (len1 < len2) {
                r = -1;
            }
            else {
                r = 1;
            }

        }
    }
    for (j = 0; j < 10; j++) {
        printf("%s\n", str[j]);
    }
    return 0;
}