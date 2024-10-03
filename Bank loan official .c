//Program to solve the following question
/*
Author:Tivah
Date:3/10/2024
Reg no:CT101/G/23447/24
*/
#include<stdio.h>
int main() {
//variable declaration 
int age;
float income;

//User input 
printf(" Enter your age");
scanf("%d",&age);

printf(" Enter your annual income");
scanf("%f",&income);

//Check loan qualifications 
if(age>=21|| income >21000){

printf(" Congratulations ! you qualify for the loan\n");

}

else{

printf("Unfortunately, we are unable to offer you laoa at this time\n");

return 0;
}
}