#include<stdio.h>
int main(){
    float fahrenheit,celsius;
    printf("Enter the temperature of the city in fahrenheit :  \n");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32)*5/9;                                           /* Formula of conversion of fahrenheit to Celsius */
    printf("Temperature in Celsius is : %.2f\n",celsius);        
    return 0;
}