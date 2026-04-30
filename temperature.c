#include <stdio.h>

int main(void)
{
float temperature;
printf("Enter the temperature for Fahrenheit: \n");
scanf("%f", &temperature);
float C = (temperature-32)/1.8;
printf("%.2f°F is equal to %.2f°C\n",temperature, C);
}
