/* 
 * program that prints Celsius-Fahrenheit convertion table
 * for fahr = 0, 20, ..., 300; floating-point version
 */

#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;        /* lower limit of temperatuire scale */
	upper = 300;      /* upper limit */
	step  = 20;       /* step size */

	fahr = lower;

	printf("Celsius\t\tFahrenheit\n");

	while (celsius <= upper) {
		fahr = celsius * 9 / 5 + 32;
		printf("%7.0f\t%18.0f\n", celsius, fahr);
		fahr = fahr + step;
		celsius = celsius + step;
	}

	return 0;
}
