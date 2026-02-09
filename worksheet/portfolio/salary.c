
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Chenxuan Li
 * ID: 201859038
 */

int main( void ) {

   // define and initialise variables for the problem data 
   float salary = 36250.0;
   float NI_rate = 8.0 / 100.0;
   float tax_rate = 15.0 / 100.0;
   float salary_after_NI, NI_contribution, tax_contribution, take_home_salary;
   
   // calculate the deductions and final take-home salary
   
   NI_contribution = salary * NI_rate;
   salary_after_NI = salary - NI_contribution;
   if (salary_after_NI <= 12500.0) {
      tax_contribution = 0; 
   }
   // If the salary after deducing the national insurance is smaller than or equal to 12500, then the tax contribution is 0.
   else {
      tax_contribution = ( salary_after_NI - 12500.0 ) * tax_rate;
   }
   take_home_salary = salary - tax_contribution - NI_contribution;
    
   // Use only these print statement with appropriate formatting and variable names
   printf("Salary £%.2f\n",salary);
   printf("NI contribution £%.2f\n",NI_contribution);
   printf("Tax contribution £%.2f\n",tax_contribution);
   printf("Take home salary £%.2f\n",take_home_salary);

   return 0;
}