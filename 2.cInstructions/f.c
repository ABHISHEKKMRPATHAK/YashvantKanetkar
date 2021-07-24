/*  calculation of wind chill factor */
#include<stdio.h>
#include<math.h>
int main(){
    double v,t,wcf;
    print("enter value of v");
    scanf("%lf",&v);
    printf("enter value of t");
    scanf("%lf",&t);
wcf = 35.74 + 0.6215*t + (0.4275*t-35.75)*pow(v,0.16);
printf("WIND CHILL FACTOR IS : %lf",wcf);
return 0;
    }