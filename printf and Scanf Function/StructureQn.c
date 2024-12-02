/*Write a program to create a structure Employee with members: id (integer), name (string), and salary (float).
Accept details of multiple employees and display those earning more than a user-defined salary threshold.
Also Find and display the employee with the highest salary.
*/
#include <stdio.h>

struct Employee {
    int id;
    float salary;
    char Name[24];
} e1, e2, e3;

int main() {
    // Input for Employee 1
    printf("Enter a Name of Employee: ");
    scanf("%s", e1.Name);
    printf("Enter an ID of Employee: ");
    scanf("%d", &e1.id);
    printf("Enter a salary of Employee: ");
    scanf("%f", &e1.salary);

    // Input for Employee 2
    printf("Enter a Name of Employee: ");
    scanf("%s", e2.Name);
    printf("Enter an ID of Employee: ");
    scanf("%d", &e2.id);
    printf("Enter a salary of Employee: ");
    scanf("%f", &e2.salary);

    // Input for Employee 3
    printf("Enter a Name of Employee: ");
    scanf("%s", e3.Name);
    printf("Enter an ID of Employee: ");
    scanf("%d", &e3.id);
    printf("Enter a salary of Employee: ");
    scanf("%f", &e3.salary);

    // Output
    printf("\n\nEmployee 1\nID: %d\nName: %s\nSalary: %.2f", e1.id, e1.Name, e1.salary);
    printf("\n\nEmployee 2\nID: %d\nName: %s\nSalary: %.2f", e2.id, e2.Name, e2.salary);
    printf("\n\nEmployee 3\nID: %d\nName: %s\nSalary: %.2f", e3.id, e3.Name, e3.salary);

    if(e1.salary > e2.salary || e1.salary > e3.salary){
        printf("\n\n %s Salary is highest with %f", e1.Name, e1.salary);
    }else if(e2.salary > e1.salary || e2.salary > e3.salary ){
        printf("\n %s Salary is highest with %f", e2.Name, e2.salary);
    }else{
        printf("\n%s Salary is highest with %f", e3.Name, e3.salary);
    }

    return 0;
}
