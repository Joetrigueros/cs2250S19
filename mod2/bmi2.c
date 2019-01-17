# include <stdio.h>
# include <math.h>
int main() 
{
	double weight = 0;
	double height = 0;
	double bmi = 0;

	printf("Enter your weight in kg: \n");
	scanf("%lf", &weight);
	
	printf("Enter your height in meters: \n");
	scanf("%lf", &height);

	bmi = weight/pow(height, 2);

	printf("with %lf kg and %lf meters, your BMi is %lf\n", weight, height, bmi);

	printf("Done\n");
return 0;
}
