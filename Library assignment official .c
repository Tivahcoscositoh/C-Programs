//Program to run a Library system 
/*
Author:Tivah
Date:3/10/2024
Reg no:CT101/G/23447/24
*/
#include <stdio.h>

int main() {
    // Variable declaration
    int Book_ID;
    int due_date;
    int return_date;
    int overdue_days;
    int fine_rate;
    int fine_amount;
    
    //inputs
    printf("Enter your Book ID: ");
    scanf("%d", &Book_ID);
    
    printf("Enter the due date: ");
    scanf("%d", &due_date);
    
    printf("Enter the return date: ");
    scanf("%d", &return_date);
    
    //calculate time overdue and fine amt
    overdue_days = return_date - due_date;
    
    //Determining the fine rate and amount
    if (overdue_days <=0){
        fine_rate = 0;
    } else if(overdue_days <=7) {
        fine_rate = 20;
    } else if(overdue_days <14) {
        fine_rate = 50;
    } else {
        fine_rate = 100;
    }
    
    fine_amount = fine_rate * overdue_days;
    
    //output
    printf("\nBook ID: %d\n", Book_ID);
    printf("Due date: %d\n", due_date);
    printf("Return date: %d\n", return_date);
    printf("Overdue days:%d\n", overdue_days);
    printf("Fine rate:%d\n", fine_rate);
    printf("Fine amount(KSH):%d", fine_amount);
    

    return 0;
}