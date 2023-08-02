# include <stdio.h>
# include <stdlib.h>

struct Foo {
    char data;
    struct Foo *ptr;
};

int main() {


    struct Foo *f, *str = 0;
    char ch;

    scanf("%c", &ch);
    
    while (ch != '\n') {
        if (str == 0) {
            str = malloc(sizeof(struct Foo));
            str -> data = ch;
            f = str;
        }
        else {
            f -> ptr = malloc(sizeof(struct Foo));
            f = f -> ptr;
            f -> data = ch;
            f -> ptr = 0;
        }
        scanf("%c", &ch);
    }
    f = str;
    while (f != 0) {
        printf("%c", f -> data);
        f = f -> ptr;
    }
    

    

    return 0;
}