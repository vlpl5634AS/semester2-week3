
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Ahmed Sharkasi
 * ID: 201826539
 */
 #include <stdio.h>
 #include <math.h>
 int main( void ) {

    // define and initialise variables for the problem data 
   float national_insurance = 0.08;
   float tax_rate = 0.15;
   float income = 36250.00;
   float NI_contribution;
   float tax_contribution;
   // calculate the deductions and final take-home salary

   NI_contribution = national_insurance * income;
   tax_contribution = ((income - NI_contribution) - 12500) * tax_rate;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", income);
    printf("NI contribution £%.2f\n", NI_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", income - NI_contribution - tax_contribution);

    return 0;
 }