#include <stdio.h>

// Function to check if a year is a leap year
int leapyear(int year) {

	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to get the number of days in a month
int daysinmonth(int month, int year) {
	switch (month) {
		case 1: return 31;
		case 2: return leapyear(year) ? 29 : 28;
		case 3: return 31;
		case 4: return 30;
		case 5: return 31;
		case 6: return 30;
		case 7: return 31;
		case 8: return 31;
		case 9: return 30;
		case 10: return 31;
		case 11: return 30;
		case 12: return 31;
		default: return 0; // Invalid month
	}
}

// Function to calculate the total number of days from 01/01/0000 to the given date
int TotalDays(int day, int month, int year) {
	int totalDays = 0;

	for (int y = 0; y < year; y++) {
		totalDays += (leapyear(y) ? 366 : 365);
	}
	for (int m = 1; m < month; m++) {
		totalDays += daysinmonth(m, year);
	}
	totalDays += day;

	return totalDays;
}

int main() {
	int day1, month1, year1;
	int day2, month2, year2;

	// Input first date
	printf("Enter first date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day1, &month1, &year1);

	//printf("%d/%d/%d\n",day1,month1,year1);

	// Input second date
	printf("Enter second date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day2, &month2, &year2);

	// Get the total number of days for each date
	int totalDays1 = TotalDays(day1, month1, year1);
	int totalDays2 = TotalDays(day2, month2, year2);

	// Calculate the difference between the two dates
	int difference;
	if(totalDays1>totalDays2)
	{
		difference=totalDays1-totalDays2;
	}
	else
	{
		difference= totalDays2-totalDays1;
	}

	// Print the result
	printf("Number of days between the dates: %d\n", difference);

	return 0;
}
