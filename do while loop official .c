#include<stdio.h>

int main(){
   int i,start,sum=0,stop;
    printf("enter a value for when to start:\n");
    scanf("%d",&start);
    
    printf(" enter a value for when to stop:\n");
    scanf("%d",&stop);
    
   do{
  
        printf("%d\n",start);
        start++;
        sum+=start;
  
  }
  while(start<=stop);
  printf("the sum is %d\n",sum); 
  return 0;
  }