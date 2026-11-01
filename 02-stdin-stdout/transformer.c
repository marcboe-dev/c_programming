#include <stdio.h>

int encryption_key = 42;

int main () 
{
    int c;

    while ( (c = getc(stdin)) != EOF ) {
        putc(c ^ encryption_key, stdout);
    }
    return 0;
}
