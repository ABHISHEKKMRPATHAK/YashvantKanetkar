#include<stdio.h>
int main(){
    float length , breadth , radius,areaOfRectangle,perimeterOfRectangle,areaOfCircle,circumferenceOfCircle ;
    printf("Enter the length of the rectangle : ");
    scanf("%f",&length);
      printf("Enter the breadth of the rectangle : ");
    scanf("%f",&breadth);
      printf("Enter the radius of the circle : ");
    scanf("%f",&radius);
     areaOfRectangle = length*breadth;
     perimeterOfRectangle = 2*(length+breadth);
     areaOfCircle=3.14*radius*radius;
     circumferenceOfCircle= 2*3.14 *radius;
     printf("AREA OF RECTANGLE IS       : %.2f\n",areaOfRectangle);
     printf("PERIMETER OF RECTANGLE IS  : %.2f\n",perimeterOfRectangle);
     printf("AREA OF CIRCLE IS          : %.2f\n",areaOfCircle);
     printf("CIRCUMFERENCE OF CIRCLE IS : %.2f\n",circumferenceOfCircle);
      return 0 ;
}