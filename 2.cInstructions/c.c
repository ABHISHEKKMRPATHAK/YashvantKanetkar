/* Area of a triangle by getting input of all the sides */
#include<stdio.h>
#include<math.h>
int main(){
float side[4],halfPerimeter;
double value ,area;
int i,j;
for(i=1;i<4;i++){
    printf("ENTER SIDE%d OF THE TRAINGLE : ",i);
    scanf("%f",&side[i]);
} 
halfPerimeter=(side[1]+side[2]+side[3])/2;
value=halfPerimeter*(halfPerimeter-side[1])*(halfPerimeter-side[2])*(halfPerimeter-side[3]);          /*using Heron's Formula */
area=sqrt(value);
printf("AREA OF GIVEN TRAINGLE IS : %.2lf",area);
return 0;
}