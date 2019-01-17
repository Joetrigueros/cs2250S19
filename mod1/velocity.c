#include<stdio.h>

int main()
{
	// 1) Ask for distane in meters
	//
	// 2) Ask for time in seconds
	//
	// 3) Calculate and Display the celocity in km/hr
	// No new lines on scanf()
	int dist = 1;
	int time = 1;
	int velocity = 1;

	printf("Please enter the distance in meters \n");
	scanf("%d", &dist);

	printf("Please enter the time in seconds\n");
	scanf("%d", &time);
	
	velocity = dist/time;
	printf("Velocity (integer) is %d m/s\n", velocity);
	
	// 1 km = 1000 meters
	// 1 hr = 3600 seconds
	// TODO : Fix the coredump related to Floating point
	//velocity = (dist/1000)/(time/3600);
	//printf("Velocity (integer) is %d km/hr\n", velocity);

	return 0;
}
