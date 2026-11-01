#include <stdio.h>

int main() {
    int c;

    while ( (c = getc(stdin) ) != EOF) {
        if ( (c > 96) && (c < 123) ) {
            c -= 32;
        }
        printf("%c", c);
    }
    return 0;

}
