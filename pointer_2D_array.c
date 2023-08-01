# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {

    int arr[3][4];
    int *p, j, k;
    for (p = &arr[0][0], j = 1; p <= &arr[2][3]; p++, j++) {
        *p = j;
    }
    for (j = 0; j < 3; j++) {
        for (k = 0; k < 4; k++) {
            printf("%d ", arr[j][k]);
        }
        printf("\n");
    }


    


    return 0;
}