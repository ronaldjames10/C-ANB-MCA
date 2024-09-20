//Write a C program to create a structure named company which has name,
// address, phone and no Of Employee as member variables. Read the name of the company, its address, phone and no Of Employee. Finally display these members" values.
#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 50
#define MAX_ADDRESS_LEN 100
#define MAX_PHONE_LEN 15

typedef struct {
    char name[MAX_NAME_LEN];
    char address[MAX_ADDRESS_LEN];
    char phone[MAX_PHONE_LEN];
    int noOfEmployees;
} Company;
void inputCompanyDetails(Company *comp) {
    printf("Enter the name of the company: ");
    fgets(comp->name, MAX_NAME_LEN, stdin);
  
    comp->name[strcspn(comp->name, "\n")] = '\0';

    printf("Enter the address of the company: ");
    fgets(comp->address, MAX_ADDRESS_LEN, stdin);
    comp->address[strcspn(comp->address, "\n")] = '\0';
    printf("Enter the phone number of the company: ");
    fgets(comp->phone, MAX_PHONE_LEN, stdin);
    comp->phone[strcspn(comp->phone, "\n")] = '\0';

    printf("Enter the number of employees: ");
    scanf("%d", &comp->noOfEmployees);
}
void displayCompanyDetails(const Company *comp) {
    printf("\nCompany Details:\n");
    printf("Name: %s\n", comp->name);
    printf("Address: %s\n", comp->address);
    printf("Phone: %s\n", comp->phone);
    printf("Number of Employees: %d\n", comp->noOfEmployees);
}
int main() {
    Company myCompany;

    inputCompanyDetails(&myCompany);

    displayCompanyDetails(&myCompany);

    return 0;
}


