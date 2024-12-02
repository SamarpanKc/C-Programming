// WAP to calculate the income tax based on the given salary using if-else statements and tax brackets

#include <stdio.h>
int main() {
    float salary, tax;
    // Get salary input from the user
    printf("Enter your annual salary: ");
    scanf("%f", &salary);
    // Tax brackets (adjust these as needed to reflect your tax laws)
    if (salary <= 250000) {
        tax = 0; // No tax for income up to 250,000
    } else if (salary <= 500000) {
        tax = (salary - 250000) * 0.05; // 5% tax on income between 250,001 and 500,000
    } else if (salary <= 1000000) {
        tax = 12500 + (salary - 500000) * 0.20; // 20% tax on income between 500,001 and 1,000,000  + base tax
    } else {
        tax = 112500 + (salary - 1000000) * 0.30; // 30% tax on income above 1,000,000 + base tax
    }

    printf("Your income tax is: %.2f\n", tax);
    return 0;
}