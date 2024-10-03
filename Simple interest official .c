//Program to Calculate simple intrest
/*
Author:Tivah
Date:1/10/2024
Reg number:CT101/G/23447/24
*/
//preprocessor directive
#include<stdio.h> 

int main(){

float p,r,t,si;

    printf("enter principle amount:\n ");
    scanf("%f",&p);
    
    printf("enter rate of interst(in percentage)\n ");
    scanf("%f",&r);
    
    printf("enter time(in years)\n");
    scanf("%f",&t); 
    
    si=(p*r*t)/100;
    
    printf("simple interest=%f",si);
    
    return 0;
    }