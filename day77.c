#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *in, *out;
    int ch;

    // Open input file
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    // Open output file
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Cannot create output.txt!\n");
        fclose(in);
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(in)) != EOF) {
        // Convert to uppercase using toupper()
        ch = toupper(ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("File converted successfully. Result written to output.txt\n");

    return 0;
}
