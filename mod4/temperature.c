#include <stdio.h>


int main()
{
	
//    float temp = 7.9;  //Celsius
    double in_temp, out_temp;
	int choice;
    // 1) Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your chice:\n");
    printf("\t0 for celsius or 1 for Fahrenheit: ");
    scanf("%d", &choice);
    // 2) Based o choice calculate celsius or Fahrenheit
    
    if(choice == 0)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);
        //convert Celsius to Fahrenheit
        out_temp = (in_temp * 9.0/5.0)+32;
        printf("Your temperature in Fahrenheit is: %.2lf\n", out_temp);
    }
    else if (choice ==1)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);
        //convert from Fahrenheit to Celsius
        out_temp = (in_temp - 32) * 5.0/9.0;
        printf("Your temperature in Celsius is: %.2lf\n", out_temp);
    }
    else
    {
        
        printf("Sorry, you did not enter 0 or 1\nAdios amigo\n");
        return 0;
    }

/*
    printf("The temperature is %f Celsius\n", temp);
	printf("what is the temperature in Ogden now in Celsius: \n");
	// use %f to capture float information
	// use %lf to capture double information
	scanf("%f", &temp);
	// convert F to C
	f_temp =(temp * 9/5)+ 32;
	printf("I see, your temp is %lf in Fahrenheit.\n",f_temp);
*/
    return 0;
}
