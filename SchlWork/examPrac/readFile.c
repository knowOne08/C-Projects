#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[] = "example.txt";
    char ch;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
