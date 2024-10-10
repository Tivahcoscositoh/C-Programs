//for loop user input
/*
Author: Tivah 
Date:10/10/2024
Reg;CT101/G/23447/24
*/
#include<stdio.h>

int main(){
 int i,start,sum=0,stop;
 
 printf("Enter value of when to start:\n");
 scanf("%d",&start);
 
 printf("Enter value of when to stop:\n");
 scanf("%d",&stop);
 
 for(i=start;i<=stop;i++)
 {
 printf("%d\n",i);
 sum=sum+i;
 }
 
 printf("The sum is:%d",sum);
 
 
 
 

    return 0;
}