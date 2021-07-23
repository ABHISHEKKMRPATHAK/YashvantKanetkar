/*conversion of Cartesian coordinates to Polar Coordinates */
#include<stdio.h>
#include<math.h>
int main(){
   double x_abscissa , y_ordinates;
    double r,$;
    printf("Enter the X (ABSCISSA) : ");
    scanf("%lf",&x_abscissa);
    printf("Enter the Y (ORDINATES) : ");
    scanf("%lf",&y_ordinates);
    r=sqrt(x_abscissa*x_abscissa+y_ordinates*y_ordinates);
    $=atan(y_ordinates/x_abscissa);
    printf("POLAR CORDINATES ARE (%lf,%lf)",r,$);
    return 0;
}