/* LEAP UNLEAP YEAR */
#include<stdio.h>
int main(){
    int year;
    printf("ENTER YEAR:\n");
    scanf("%d",&year);
      if(year%4==0){
          printf("THIS IS A <<<<<LEAP YEAR >>>>>>\n");
      }
      else
          printf("THIS IS AN <<<<<<<UNLEAP YEAR>>>>>>\n");
return 0;
}