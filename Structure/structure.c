/*WAP to create a structure Employee with members: id (integer), name (string), and salary (float).
Accept details of multiple employees and display those earning more than a user-defined salary threshold.
Also Find and display the employee with the highest salary.
*/

#include <stdio.h>
#include <string.h>

// Define a structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;
    float salary_threshold;
    int highest_salary_index = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Create an array of Employee structures
    struct Employee employees[n];

    // Input details of employees
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf(" %[^\n]%*c", employees[i].name); // To handle spaces in names
        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        // Track the employee with the highest salary
        if (employees[i].salary > employees[highest_salary_index].salary) {
            highest_salary_index = i;
        }
    }

    // Get the salary threshold from the user
    printf("\nEnter the salary threshold: ");
    scanf("%f", &salary_threshold);

    // Display employees earning more than the threshold
    printf("\nEmployees earning more than %.2f:\n", salary_threshold);
    for (i = 0; i < n; i++) {
        if (employees[i].salary > salary_threshold) {
            printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
        }
    }

    // Display the employee with the highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n",
           employees[highest_salary_index].id,
           employees[highest_salary_index].name,
           employees[highest_salary_index].salary);

    return 0;
}

