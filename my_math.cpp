# include "my_math.h"
# include <stdio.h>
double Exp(double x, double pog, double* num_terms)
{
	int N = 1000;
	double c = 1;
	double res = 1;
	int n = 0;
	for (; n < N; n++)
	{
		c = c * (x / ((double(n)) + 1));
		if (c < pog)
		{
			res += c;
			break;
		}
		res += c;
	}
	*num_terms = (double(n)) + 1;
	return res;
}

double sin(double x, double pog, double* num_terms)
{
	int N = 1000;
	double test = 0;
	double c = x;
	double res = x;
	int n = 0;
	if ((x > 1.55 && x < 1.57) | (x > 4.7 && x < 4.8) | (x > -1.55 && x < -1.57) | (x > -4.7 && x < -4.8))
	{
		return (cos(x - 1.56, pog, num_terms));
	}
	else 
	{
		for (; n < N; n++)
		{
			c = c * (-1) * ((x * x) / ((2 * (double(n)) + 2) * (2 * (double(n)) + 3)));

			if (c < 0)
			{
				test = c * (-1);
			}
			else
			{
				test = c;
			}
			if (test <= pog)
			{
				res += c;
				break;
			}
			res += c;
		}
		*num_terms = (double(n)) + 1;
		return res;
	}
	
}

double cos(double x, double pog, double* num_terms)
{
	int N = 1000;
	double test = 0;
	double c = 1;
	double res = 1;
	int n = 1;
	if ((x > 1.55 && x < 1.57) | (x > 4.7 && x < 4.8) | (x > -1.55 && x < -1.57) | (x > -4.7 && x < -4.8))
	{
		return (sin(x - 1.56, pog, num_terms));
	}
	else
	{
		do
		{
			c = c * (-1) * ((x * x) / ((2 * (double(n)) - 1) * (2 * (double(n)))));
			if (c >= 0)
			{
				test = c;
			}
			else
			{
				test = c * (-1);
			}
			res += c;
			n++;
		} while (test > pog);
		*num_terms = (double(n)) + 1;
		return res;
	}
}

double tan(double x, double pog, double* num_terms)
{	

	double a = sin(x, pog, num_terms);
	double b = cos(x, pog, num_terms);
	double res = a / b;
	return res;
}

double ln(double x, double pog, double* num_terms)
{
	int N = 1000;
	double test = 0;
	double c = x;
	double res = x;
	int n = 0;
	for (; n < N; n++)
	{
		c = c * (-1) * ((x * ((double(n)) + 1)) / ((double(n)) + 2));

		if (c < 0)
		{
			test = c * (-1);
		}
		else 
		{
			test = c;
		}
		if (test <= pog)
		{
			res += c;
			break;
		}
		res += c;
	}
	*num_terms = (double(n)) + 1;
	return res;
}

double arcsin(double x, double pog, double* num_terms)
{
	int flag = 0;
	if (x < 0)
	{
		x *= (-1);
		flag = 1;
	}
	int n = 1;
	double c = x;
	double s = 1;
	double res = x;
	while (s > pog)
	{	
		c = x * x * (c * (2 * (double(n)) - 1)) / (2 * (double(n)));
		s = c / (2 * (double(n)) + 1);
		res = res + s;
		n++;

	}
	if (flag == 1)
	{	
		*num_terms = n + 1;
		return (res * (-1));
	}
	else
	{	
		*num_terms = n + 1;
		return res;
	}
}