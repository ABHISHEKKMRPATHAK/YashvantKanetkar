#include<stdio.h>
int leapYear(int);
 void main(){
    int year;
    printf("Enter year of you choice : \n");
    scanf("%d",&year);
    year =leapYear(year);
    if(year)
    printf("THIS IS LEAP YEAR\n");
    else
    printf("THIS IS UNLEAP YEAR\n");
}
int leapYear(x){
    int val;
    if(x%4==0){
        val=1;
    }
    else
    val=0;

return val;
}