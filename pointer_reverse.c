# include <stdio.h>
# include <stdlib.h>
# include <time.h>


int main() {

    char str1[1000];
    char *p, *h, i, len;
    scanf("%s", str1);
    for (p = &str1[0]; *p != '\0'; p++);
    p -= 1;
    h = &str1[0];
    while (p > h) {
        i = *p;
        *p = *h;
        *h = i;
        p -= 1;
        h += 1;
        
    }
    printf("%s", str1);
    
    return 0;
}
