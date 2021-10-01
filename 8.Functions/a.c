#include<stdio.h>
int factorial(int );
int main(){
    int a;
    printf("Enter a number :\n");
    scanf("%d",&a);
    a=factorial(a);
    printf("Factorial value of a is : %d\n",a);
    return 0;
}
int factorial(x){
    int i ,j,fact=1 ;
    for(i=1;i<=x;i++){
         fact=i*fact;
    }
    return fact;
};
