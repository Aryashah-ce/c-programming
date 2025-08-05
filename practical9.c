#include<stdio.h>
int main()
{
    float total_amount,discount,Final_amount;
printf("Enter your total amount:");
scanf("%f",&total_amount);
    if(total_amount<=1000)
    {
        printf("No discount is applied");
    }
    else if(total_amount >1000 && total_amount<=5000)
    {
        printf("\n 10%% discount is applied ");

discount= (total_amount*10)/100;
Final_amount= total_amount - discount;
        printf("\n Final amount after discount is %f",Final_amount);
    }
    else
    {
        printf("\n 20%% discount is applied");

discount=(total_amount*20)/100;
Final_amount= total_amount - discount;
        printf("\n Final amount after discount is %f",Final_amount);
    }
    return 0;
}
