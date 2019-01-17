#include <stdio.h>

int main() 
{
	int weight = 0;
	int height = 0;
	int bmi = 0;

	printf("Enter your weight in kg: \n");
	scanf("%d", &weight);
	
	printf("Enter your height in meters: \n");
	scanf("%d", &height);

	bmi = weight/(height * height);

	printf("with %d kg and %d meters, your BMi is %d\n", weight, height, bmi);

	printf("Done\n");





return 0;
}
