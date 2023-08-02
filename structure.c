# include <stdio.h>
# include <stdlib.h>

struct Foo {

    int data;
    struct Foo *ptr; // This "*ptr" pointer point to the structure of Foo

    
};

int main() {
    struct Foo *f, *foo = 0;
    int j;

    for (j = 0; j < 3; j++) {
        f = malloc(sizeof(struct Foo));
        f -> ptr = foo;
        f -> data = j;
        foo = f;
    }

    while (f != 0) {
        printf("%d ", f -> data);
        f = f -> ptr; 
        // The origin f point to the 2, but this line make the f point to the 1
    }


    return 0;
}