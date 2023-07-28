#include <stdio.h>

int main() {

    int arr[50][50] = {};
    int j, k, i, n, counter = 1, x, y, tempx, tempy;
    scanf("%d", &n);

    y = 0;
    x = n / 2;
    while (counter <= n * n) {

        arr[y][x] = counter;
        counter++;
        tempx = x + 1;
        tempy = y - 1;

        if (tempx >= n) {
            tempx = 0;
        }

        if (tempy < 0) {
            tempy = n - 1;
        }

        if (arr[tempy][tempx] != 0) {

            tempx = x;
            tempy = y + 1;

            if (tempy >= n) {
                tempy = 0;
            }
        }
        x = tempx;
        y = tempy;
    }
    
    for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) {
            printf("%2d ", arr[j][k]);
        }
    printf("\n");
    }


}