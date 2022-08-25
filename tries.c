#include <stdio.h>
int main ()

{
	char  name [5];
	double num1;
	double num2;

	printf("insert your name:\n");
	scanf("%s\n", name);
	printf("please input first number:\n");
	scanf("%lf\n", &num1);
	printf("please input second number:\n");
	scanf("%lf\n", &num2);
	printf("your name is %s\n", name);
	printf("%f\n", num1 + num2);
	printf("%f\n", num1 - num2);
	printf("%f\n", num1 * num2);
	printf("%f\n", num1 / num2);

}
