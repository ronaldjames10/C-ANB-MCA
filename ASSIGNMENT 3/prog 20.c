//Write a C program to read the RollNo, Name, Address,
// and Age marks of 12 students in the BCT class and display the details from the function.
#include <stdio.h>
#define MAX_STUDENTS 2
#define MAX_NAME_LEN 50
#define MAX_ADDRESS_LEN 100
typedef struct {
    int rollNo;
    char name[MAX_NAME_LEN];
    char address[MAX_ADDRESS_LEN];
    int age;
    float marks;
} Student;
void inputStudentDetails(Student *s) {
    printf("Enter Roll Number: ");
    scanf("%d", &s->rollNo);
    getchar(); 
    printf("Enter Name: ");
    fgets(s->name, MAX_NAME_LEN, stdin);
    s->name[strcspn(s->name, "\n")] = '\0';
    printf("Enter Address: ");
    fgets(s->address, MAX_ADDRESS_LEN, stdin);
 s->address[strcspn(s->address, "\n")] = '\0';
    printf("Enter Age: ");
    scanf("%d", &s->age);
    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}
void displayStudentDetails(const Student *s) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s->rollNo);
    printf("Name: %s\n", s->name);
    printf("Address: %s\n", s->address);
    printf("Age: %d\n", s->age);
    printf("Marks: %.2f\n", s->marks);
}
int main() {
	int i;
    Student students[MAX_STUDENTS];
    for ( i = 0; i < MAX_STUDENTS; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        inputStudentDetails(&students[i]);
    }
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        displayStudentDetails(&students[i]);
    }
    return 0;
}

