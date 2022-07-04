/*Project: simple calculator that takes two numbers and outputs the sum,
difference,product and quotient of the numbers.
Author  :   Daniel Francis
Compiler:   C89
License :   MIT
Date    :   July 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable declaration
    float numb1,numb2,sum,difference,product,quotient;

    printf("\tCalculator!\n");
    // input
    printf("Enter two numbers: ");
    scanf("%f%f",&numb1,&numb2);
    // computation
    // arithmetic operators: + - * / ++ -- %
    sum = numb1 + numb2;
    difference = numb1 - numb2;
    product = numb1 * numb2;
    quotient = numb1 / numb2;
    // output
    // 20 + 30 = 50
    printf("%8.2f +%8.2f = %-8.2f\n",numb1,numb2,sum);
    printf("%8.2f -%8.2f = %-8.2f\n",numb1,numb2,difference);
    printf("%8.2f *%8.2f = %-8.2f\n",numb1,numb2,product);
    printf("%8.2f /%8.2f = %-8.2f\n",numb1,numb2,quotient);
    return 0;
}
