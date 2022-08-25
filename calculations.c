#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

        double num1;
        double num2;


        printf("please input first number:");
        scanf("%lf", &num1);

        printf("please input second number:");
        scanf("%lf", &num2);


        printf("number1 plus number2; %f\n", num1 + num2);
        printf("number1 minus number2: %f\n", num1 - num2);
        printf("number1 time number2: %f\n", num1 * num2);
        printf("number divided by number2: %f\n", num1 / num2);
        printf("square of first  number is: %f\n", pow(num1, 2));
        printf("square of second  number is: %f\n", pow(num2, 2));
        printf("squareroot of first  number is: %f\n", sqrt(num1));
        printf("squareroot of second number is: %f\n", sqrt(num2));
    return 0;
}
