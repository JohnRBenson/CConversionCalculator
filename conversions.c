/*
John Benson

1.	Convert miles to kilometers
2.	Convert kilometers to miles
3.	Convert inches to centimeters
4.	Convert centimeters to inches
5.	Convert miles to feet
6.	Convert feet to miles
7.	Convert cups to quarts
8.	Convert liters to quarts
9.	Convert Fahrenheit to Celsius
10.	Convert days to seconds

*/

#include <stdio.h>
//prototype:
float milesToKilometers(float input);
float kilometersToMiles(float input);
float inchesToCentimeters(float input);
float centimetersToInches(float input);
float milesToFeet(float input);
float feetToMiles(float input);
float cupsToQuarts(float input);
float litersToQuarts(float input);
float fahrenheitToCelsius(float input);
float daysToSeconds(float input);


int main (void)
{
	int choice=0;//1-10 for switch/case to select conversion
	float input=0;//value of first unit
	float output=0;//value after conversion returned to user
	
	do
	{
	printf("\n\nEnter a number between 1 and 10 corresponding to the conversion you would like to perform listed below:\n\n");
	printf("1.\tConvert miles to kilometers\n");
	printf("2.\tConvert kilometers to miles\n");
	printf("3.\tConvert inches to centimeters\n");
	printf("4.\tConvert centimeters to inches\n");
	printf("5.\tConvert miles to feet\n");
	printf("6.\tConvert feet to miles\n");
	printf("7.\tConvert cups to quarts\n");
	printf("8.\tConvert liters to quarts\n");
	printf("9.\tConvert Fahrenheit to Celsius\n");
	printf("10.\tConvert days to seconds\n\n");
	
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("Please enter miles:\n");
			scanf("%f",&input);
			output = milesToKilometers(input);
			printf("%f kilometers",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 2:
			printf("Please enter kilometers:\n");
			scanf("%f",&input);
			output = kilometersToMiles(input);
			printf("%f miles",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 3:
			printf("Please enter inches:\n");
			scanf("%f",&input);
			output = inchesToCentimeters(input);
			printf("%f centimeters",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 4:
			printf("Please enter centimeters:\n");
			scanf("%f",&input);
			output = centimetersToInches(input);
			printf("%f inches",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 5:
			printf("Please enter miles:\n");
			scanf("%f",&input);
			output = milesToFeet(input);
			printf("%f feet",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 6:
			printf("Please enter feet:\n");
			scanf("%f",&input);
			output = feetToMiles(input);
			printf("%f miles",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 7:
			printf("Please enter cups:\n");
			scanf("%f",&input);
			output = cupsToQuarts(input);
			printf("%f quarts",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 8:
			printf("Please enter liters:\n");
			scanf("%f",&input);
			output = litersToQuarts(input);
			printf("%f quarts",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 9:
			printf("Please enter degrees Fahrenheit:\n");
			scanf("%f",&input);
			output = fahrenheitToCelsius(input);
			printf("%f Celsius",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 10:
			printf("Please enter number of days:\n");
			scanf("%f",&input);
			output = daysToSeconds(input);
			printf("%f Seconds",output);
			printf("\n\nEnter 0 to exit or choose another conversion:\n");
			break;
		case 0:
			printf("Bye!\n");
			break;
		default:
			printf("That was an invalid option\n");
		
	}
	
	}while (choice != 0 && choice <= 10 && choice >= 1);
	
	return 0;
}

//1.	Convert miles to kilometers
float milesToKilometers(float input)
{
	float output=0;
	
	output = input * 1.60934;
	
	return output;
}

//2.	Convert kilometers to miles
float kilometersToMiles(float input)
{
	float output=0;
	
	output = input * .621371;
	
	return output;
}

//3.	inches to centimeters
float inchesToCentimeters(float input)
{
	float output=0;
	
	output = input * 2.54;
	
	return output;
}

//4.	Convert centimeters to inches
float centimetersToInches(float input)
{
	float output=0;
	
	output = input *.393701;
	
	return output;
}

//5.	Convert miles to feet
float milesToFeet(float input)
{
	float output=0;
	
	output = input * 5280;
	
	return output;
}

//6.	Convert feet to miles
float feetToMiles(float input)
{
	float output=0;
	
	output = input * .000189394;
	
	return output;
}

//7.	Convert cups to quarts
float cupsToQuarts(float input)
{
	float output=0;
	
	output = input * .25;
	
	return output;
}

//8.	Convert liters to quarts
float litersToQuarts(float input)
{
	float output=0;
	
	output = input * 1.05669;
	
	return output;
}

//9.	Convert Fahrenheit to Celsius
float fahrenheitToCelsius(float input)
{
	float output=0;
	
	output = ((input-32)*5)/9;
	
	return output;
}

//10.	Convert days to seconds
float daysToSeconds(float input)
{
	float output=0;
	
	output = input * 86400;
	
	return output;
}

