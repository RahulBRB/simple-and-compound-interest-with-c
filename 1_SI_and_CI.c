#include<stdio.h>
#include<math.h>


// 1. Write a program to calculate simple and compound interest.

void main(){

    float p, r, t, a , ci, si;

    printf("Enter Principle:"); 
    scanf("%f", &p);

    printf("Enter Rate:");
    scanf("%f", &r);

    printf("Enter Time:");
    scanf("%f", &t);

    si=(p*r*t/100);
    printf("\n Simple Interest = %f", si);

    a = p*(pow((1 + r / 100), t));
    ci= a -p;
    printf("\n Compound Interest = %f", ci);



}