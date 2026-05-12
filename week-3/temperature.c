#include <stdio.h>

int main(void)
{
float temperature;
printf("Enter the temperature for Fahrenheit: \n");
scanf("%f", &temperature);
float C = (temperature-32)/1.8;
printf("%.2f°F is equal to %.2f°C\n",temperature, C);
if (C <= 0 == 10) {
    printf("%.2f is ❄️ Freezing weather.\n", C);
} else
if (C < 10) {
    printf("%.2f is 🥶 Very cold weather.\n", C);
}else
if (C < 20) {
    printf("%.2f is 🧥 Chilly weather.\n", C);
}else
if (C < 30) {
    printf("%.2f is 🖼️ Normal weather.\n", C);
}else
if (C < 40) {
    printf("%.2f is ☀️ Hot weather.\n", C);
}else
if (C >= 40) {
    printf("%.2f is 🔥 Very hot weather.\n", C);
}
}
