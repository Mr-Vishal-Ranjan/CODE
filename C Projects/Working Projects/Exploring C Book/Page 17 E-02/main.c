#include<stdio.h>
float main(){
    float Fahrenheit;
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&Fahrenheit);
    printf("Temperature in Celsius --> %0.1f °C\n",(Fahrenheit-32)*5/9);
    //Here %0.1f is for print only one digit after decimal in float .
}