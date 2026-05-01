#include <stdio.h>

int main(void)
{
int minutes;
printf("Enter the run time of the movie in minutes:");
scanf("%d", &minutes);

int start_h;
int start_m;
printf("Start Time: ");
scanf("%d:%d", &start_h, &start_m);

int hours = minutes / 60;
int min = minutes & 60;

int end_h = start_h + hours;
int end_m = start_m + min;

printf("The movie will last %d hr and %d min.\n", hours, min);
printf("End time: %d:%d \n", end_h, end_m);
}
