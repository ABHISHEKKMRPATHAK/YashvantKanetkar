#include<stdio.h>
int main(){
    float distance;
    printf(" Give the distance between two cities in Kilometer : ");
    scanf("%f",&distance);
    distance = distance/1000;                                               /* kilometre to metre*/
    printf("\n Your distance in meter is       : %.2fm",distance);
    distance = distance*39.37 ;                                             /* meter to inch */
    printf("\n Your distance in inch is        : %.2finch\n",distance);
    distance = distance * 2.54 ;                                            /* inch to centimeter */
    printf(" Your distance in centimeter is   : %.2fcm\n",distance);
    return 0;
}