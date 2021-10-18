# include <stdio.h>
# include "my_math.h"

int main()
{
	double x = 0;
	double pog = 0;
	int who = 0;
	double terms = 0;
	double otvet = 0;
	int flag = 0;
	
	printf("Available function:\n1) Exp\n2) sin\n3) cos\n4) tan\n5) ln (-1 < x <= 1)\n6) arcsin (|x| <= 1)\n");
	printf("Which function you would to calculate(input number)? \n");

	scanf_s("%d", &who);

	printf("Input argument and error\n");

	scanf_s("%lf", &x);
	scanf_s("%lf", &pog);
	
	if (who == 1)
	{
		otvet = Exp(x, pog, &terms);
	}
	if (who == 2)
	{
		otvet = sin(x, pog, &terms);
	}
	if (who == 3)
	{
		otvet = cos(x, pog, &terms);
	}
	if (who == 4)
	{	
		cos(x, pog, &terms) == 0 ? flag = 1 : otvet = tan(x, pog, &terms);
	}
	if (who == 5)
	{
		otvet = ln(x, pog, &terms);
	}
	if (who == 6)
	{
		otvet = arcsin(x, pog, &terms);
	}
	
	if (flag == 0)
	{
		printf("answer %lf \n", otvet);
		printf("number of terms %lf", terms);
	}
	else
	{
		printf("Warning - division by zero");
	}
	return 0;
}