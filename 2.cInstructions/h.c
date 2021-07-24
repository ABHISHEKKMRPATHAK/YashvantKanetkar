/* Interchanging of two locations */
#include<stdio.h>
int main(){
    int c,d,flag;
    printf("Enter first locations : \t");
    scanf("%d",&c);
    printf("Enter second location : \t");
    scanf("%d",&d);
    flag=c;
    c=d;
    d=flag;
    printf("<<<<<<<<<ATTENTION>>>>>>><<<<<<<<<<LOCATION CHANGED>>>>>>>>>>>\n FIRST LOCATION  IS %d \n SECOND LOCATION IS %d  \n",c,d);
        return 0;
}