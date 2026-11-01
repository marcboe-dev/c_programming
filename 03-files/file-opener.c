#include <stdio.h>

int enc_key = 64;

int main (int argc, char *argv[]) {
    if (argc != 3) {
        printf("%s expects exactly 2 inputs: <input> <output>\n", argv[0]);
        return -1;
    }
    FILE *in_file = fopen(argv[1],"r");
    FILE *out_file = fopen(argv[2], "w");

    int c;
    while ( (c = getc(in_file)) != EOF )  {
        putc(c ^ enc_key, out_file);
    }
    fclose(in_file);
    fclose(out_file);
}
