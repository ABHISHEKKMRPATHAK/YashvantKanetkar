#include<stdio.h>
int pow(int,int);
int main(){
    int a ,b;
    printf("Enter base value : \n");
    scanf("%d",&a);
    printf("Enter exponential value : \n");
    scanf("%d",&b);
    pow(a,b);
    a=pow(a,b);
    printf("VALUE IS : %d \n",a);
    return 0;
}
int pow(x,y){
    int i,val=1;
    for (i=1;i<=y;i++){
         val=val*x;
    }
return val;
}