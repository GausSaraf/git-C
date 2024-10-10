#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char phone[15];
    float salary;
    char address[100];
};

int main() {
    struct Employee employees[100];
    int employeeCount = 0;
    int n;
    printf("Number of Employees: ");
    scanf("%d", &n);

    int choice;

    while (1) {
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Add Employee
            if (employeeCount < n) {
                struct Employee newEmployee;

                printf("Enter Employee ID: ");
                scanf("%d", &newEmployee.id);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]", newEmployee.name);
                printf("Enter Employee Phone: ");
                scanf("%s", newEmployee.phone);
                printf("Enter Employee Salary: ");
                scanf("%f", &newEmployee.salary);
                printf("Enter Employee Address: ");
                scanf(" %[^\n]", newEmployee.address);

                employees[employeeCount] = newEmployee;
                employeeCount++;

                printf("Employee added successfully.\n");
            }
            else {
                printf("Employee list is full.\n");
            }
        } else if (choice == 2) {

            for (int i = 0; i < employeeCount; i++) {
                printf("Employee ID: %d\n", employees[i].id);
                printf("Employee Name: %s\n", employees[i].name);
                printf("Employee Phone: %s\n", employees[i].phone);
                printf("Employee Salary: %.2f\n", employees[i].salary);
                printf("Employee Address: %s\n", employees[i].address);
                printf("--------------------------\n");
            }
        } else if (choice == 3) {

            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
