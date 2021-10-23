#include<stdio.h>
int main(){
double celcius,fahrenheit;
printf("enter temperature in farenheit:");
scanf("%lf",&fahrenheit);
celcius=(fahrenheit-32)*5/9;
printf("%.1lf fahrenheit is %.1lf degree celcius\n",fahrenheit,celcius);


}
