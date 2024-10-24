// 3. Write a C program to print the contents of a file
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("filename.txt", "r"); // Replace "filename.txt" with your actual file name

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
