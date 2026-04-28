#include <stdio.h>

int main(void)
{
float temperature;
printf("Enter the temperature for Fahrenheit: \n");
scanf("%f", &temperature);
float C = (temperature-32)/1.8;
printf("temperature°F is equal to %f°C\n", C);
}
