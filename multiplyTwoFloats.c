#include <stdio.h>
int main()
{
    double firstNumber, secondNumber, productOfTwoNumbers;
    printf("Enter two numbers: ");

    // Stores two floating point numbers in variable firstNumber and secondNumber respectively
    scanf("%lf %lf", &firstNumber, &secondNumber);  
 
    // Performs multiplication and stores the result in variable productOfTwoNumbers
    productOfTwoNumbers = firstNumber * secondNumber;  

    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %.2lf", productofTwoNumbers);
    
    return 0;
}