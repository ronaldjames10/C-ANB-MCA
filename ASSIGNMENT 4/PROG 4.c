// 4. Write a C program to copy the contents of one file to another file
#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source_file.txt", "r"); // Replace "source_file.txt" with the source file name
    fp2 = fopen("destination_file.txt", "w"); // Replace "destination_file.txt" with the destination file name

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.\n");

    return 0;
}
