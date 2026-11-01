#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *in_file = fopen(argv[1], "r");

    int c;
    int newline_count = 0;
    while ( (c = getc(in_file) != EOF )) {
        if (c == '\n') {
            newline_count += 1;
        } 
    }

    printf("There are [%i] newline-characters in the file '%s'\n", newline_count, argv[1]);
}
