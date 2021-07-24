/* calculation of all trignometric function if angle is given as input */
#include<stdio.h>
#include<math.h>
int main(){
    double angle , a,b,c ,d,e,f;
    printf(" input an angle (in degree) of which all trigonometric ratio is to be find\n");
    scanf("%lf",&angle);
    a=sin(angle);
    b=cos(angle);
    c=tan(angle);
    d=1/a;
    e=1/b;
    f=1/c;
    printf("SIN(%lf) is : %lf",angle,a);
      printf("COS(%lf) is : %lf",angle,b);
        printf("TAN(%lf) is : %lf",angle,c);
          printf("COSEC (%lf) is : %lf",angle,d);
            printf("SEC(%lf) is : %lf",angle,e);
              printf("COT(%lf) is : %lf",angle,f);
    return 0;
}