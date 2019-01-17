#include <stdio.h>
#include <math.h>
	// gcc ballDropper.c -o ballDropped -lm
	const double GRAVITY = 9.8; //m/(2 * 2)
	const double BUILDING = 500;
int main()
{
	// Formula: s = 0.5 G *(T * T)
	double time = 0;
	double distance = 0;
	double fromGround = 0;
	//Take user input: time travelled
	printf("Enter the time.\n");
	scanf("%lf", &time);

	distance = 0.5 * GRAVITY * pow(time, 2);
	//Display distance.
	printf("After %lf seconds, your ball travelled %lf meters\n",
			time, distance);
	// Distance from the ground
	fromGround = BUILDING - distance;
	printf("The ball is %lf meters from the ground\n" , fromGround);

	return 0;
}
