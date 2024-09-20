//2.Write a program that stores the marks of the subject Mathematics and 
//English of n number of students in an array and then prints their total marks.
#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    float math[n], english[n], total[n];
    for ( i = 0; i < n; i++) {
        printf("\nEnter marks for student %d:\n", i + 1);
        printf("Mathematics: ");
        scanf("%f", &math[i]);
        printf("English: ");
        scanf("%f", &english[i]);
        total[i] = math[i] + english[i];
    }
    printf("\nTotal marks of each student:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: Total = %.2f\n", i + 1, total[i]);
    }

    return 0;
}

