
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: anthony wills
 * ID: 201961071
 */


int main( void ) {

    // define and initialise variables for the problem data 
    float salary;
    float ni_rate;
    float tax_rate;
    float tax_threshold = 12500.00;   // Tax-free allowance
    
    float ni_contribution;
    float salary_after_ni;
    float taxable_income;
    float tax_contribution;
    float take_home_salary;

    // Get input from user
    printf("Enter salary (£): ");
    scanf("%f", &salary);
    
    printf("Enter NI rate (%%): ");
    scanf("%f", &ni_rate);
    
    printf("Enter tax rate (%%): ");
    scanf("%f", &tax_rate);

    // calculate the deductions and final take-home salary
    
    // Calculate NI contribution (deducted from total salary)
    ni_contribution = salary * (ni_rate / 100);
    
    // Calculate salary after NI deduction
    salary_after_ni = salary - ni_contribution;
    
    // Calculate taxable income (amount over £12500)
    if (salary_after_ni > tax_threshold) {
        taxable_income = salary_after_ni - tax_threshold;
        tax_contribution = taxable_income * (tax_rate / 100);
    } else {
        taxable_income = 0;
        tax_contribution = 0;
    }
    
    // Calculate take-home salary
    take_home_salary = salary_after_ni - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("\n--- Results ---\n");
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
}