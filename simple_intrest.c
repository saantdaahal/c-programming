#include<stdio.h>
int main(){
    //Program for calcuate simple intrest//
    float principle, time, rate;

    printf("Enter the principle: \n");
    scanf("%f", &principle);

    printf ("Enter the time: \n");
    scanf("%f", &time);

    printf("Enter the rate: \n");
    scanf("%f", &rate);

    printf("The simple intrest is: %f", principle*time*rate/100);
    return 0
}