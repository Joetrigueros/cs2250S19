#include <stdio.h>

int main()
{
	float temp = 7.9;  //Celsius
	double f_temp = 0;
	// For floats use the %f placeholder
	printf("The temperature is %f Celsius\n", temp);
	printf("what is the temperature in Ogden now in Celsius: \n");
	// use %f to capture float information
	// use %lf to capture double information
	scanf("%f", &temp);
	// convert F to C
	f_temp =(temp * 9/5)+ 32;
	printf("I see, your temp is %lf in Fahrenheit.\n",f_temp);
	return 0;
}
