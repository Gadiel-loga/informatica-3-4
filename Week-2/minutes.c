#include <stdio.h>

int main(void)
{
int minutes;
printf("Movie running time:");
scanf("%d", &minutes);

int start_h;
int start_m;
printf("Start Time: ");
scanf("%d:%d", &start_h, &start_m);

int hours = minutes / 60;
int min = minutes % 60;

int end_h = start_h + hours; //end_h = 8
int end_m = start_m + min; //end_m = 61

if (end_m >=60) {
    end_h = end_h + (end_m / 60); // Update variable value
    end_m = end_m % 60;
}
printf("The movie will last %d hr and %d min.\n", hours, min);
printf("End time: %d:%02d \n", end_h, end_m);
}
