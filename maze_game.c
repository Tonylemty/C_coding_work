# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <time.h>


int main() {
    char ch;
    int map[20][20] = {};
    int j, k, x, y;
    srand(time(NULL));
    for (j = 0; j < 20; j++) {
        for (k = 0; k < 20; k++) {
            if (rand() % 10 < 3) {
                map[j][k] = 1;
            }
        }
    }

    for (j = 0; j < 20; j++) {
        map[0][j] = 1;
        map[j][0] = 1;
        map[19][j] = 1;
        map[j][19] = 1;

    }

    x = 1;
    y = 1;

    for (j = 0; j < 20; j++) {
        for (k = 0; k < 20; k++) {
            if (j == y && k == x) {
                printf("☆");
            }
            else {
            printf(("%s", (map[j][k]) == 0)? " ": "■");
            }
        }
        printf("\n");
    }   

    while (1) {
        ch = getch();
        switch (ch) {
        case 72:
            if (map[y - 1][x] == 0) {
                y--;
            }
            break;
        case 80:
            if (map[y + 1][x] == 0) {
                y++;
            }
            break;
        case 75:
            if (map[y][x - 1] == 0) {
                x--;
            }
            break;
        case 77:
            if (map[y][x + 1] == 0) {
                x++;
            }
            break;
        }

        if (ch == 27) {
            break;
        }
    }
    
    system("cls");
    for (j = 0; j < 20; j++) {
        if (j == y && k == x) {
            printf("☆");
        }
        else {
            printf("%s", (map[j][k] == 0)? " ": "■");
        }

        printf("\n");

        if (x == 18 && y == 18) {
            printf("You are the winner!!");
            printf("Great job!!");
            break;
        }
    }
    
    
}