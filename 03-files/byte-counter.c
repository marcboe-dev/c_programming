#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("You are only allowed to enter 1 filename.\n");
        return -1;
    }
    FILE *in_file = fopen(argv[1], "r");

    int c;
    int count = 0; 
    while ( (c = getc(in_file)) != EOF) {
        count += 1;
    }
    printf("The file has [%i] bytes.\n", count);

    fclose(in_file);
}
