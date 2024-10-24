// 2. Write a C program to count the number of lines in a file
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("filename.txt", "r"); // Replace "filename.txt" with your actual file name

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    fclose(fp);

    printf("Number of lines in the file: %d\n", count);

    return 0;
}
