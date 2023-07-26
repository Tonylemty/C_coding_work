#include <stdio.h>

int main()
{   
    
    char str1[1000], str2[1000];
    int len1, len2, j, flag;
    scanf("%s%s", str1, str2);
    for (len1 = 0; str1[len1] != '\0'; len1++);
    for (len2 = 0; str2[len2] != '\0'; len2++);
    printf("%s(%d), %s(%d)\n", str1, len1, str2, len2);
    
    for (int j = 0; j < ((len1 < len2)? len1: len2); j++) {
        if (str1[j] < str2[j]){
            flag = -1;
            break;

        } 
        else if (str1[j] > str2[j]) {
            flag = 1;
            break;
        }
    }
    if (j >= ((len1 < len2)? len1: len2)) {
        if (len1 == len2) {
            flag = 0;
        }
        else if (len1 < len2) {
            flag = -1;
        }
        else {
            flag = 1;
        }
    }
    switch (flag) {
    case -1:
        printf("%s < %s\n", str1, str2);
        break;
    case 0:
        printf("%s = %s\n", str1, str2);
        break;
    case 1:
        printf("%s > %s\n", str1, str2);
        break;

    }

    return 0;    
}