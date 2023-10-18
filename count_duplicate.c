# include <stdio.h>
# include <string.h>
# include <math.h>
# include <time.h>
# include <stdlib.h>

int main() {

    int nums[10] = {1, 2, 3, 2, 3, 4, 5, 6, 7, 8}; 
    int counter = 0, arrSize = 10;

    for (int k = 0; k < 10; k++) {
        scanf("%d", &nums[k]);
    }

    for (int j = 0; j < arrSize; j++) {
        int flag = 0;
        
        for (int i = j + 1; i < arrSize; i++) {

            if (nums[j] == nums[i]) {

                for (int k = i; k < arrSize; k++) {
                    nums[k] = nums[k + 1];
                }

                arrSize--;
                i--;
                flag = 1;
            }
        }
        counter += flag;
    }
    printf("\n");
    printf("%d\n", counter);

    for (int c = 0; c < arrSize; c++) {
        printf("%d ", nums[c]);
    }

        
    return 0;  
}

    
