#include<stdio.h>
int main()
{
    int choice ;
printf("Welcome To Taj Hotel");
printf("\nIn menu we have pizza, Burger, Pastas, Sandwitches, French Fries");
printf("\nEnter 1 for pizza");
printf("\nEnter 2 for Burger");
printf("\nEnter 3 for Pastas");
printf("\nEnter 4 for Sandwitches");
printf("\nEnter 5 for French Fries");
printf("\nEnter your choice:");
scanf("%d",&choice);

switch(choice){
    case 1:

            printf("\nYou have ordered pizza which will be shortly delivered");
            break;

    case 2:

            printf("\nYou have ordered Burger which will be shortly delivered");
            break;

    case 3:

            printf("\nYou have ordered Pastas which will be shortly delivered");
            break;

    case 4:

            printf("\nYou have ordered Sandwitches which will be shortly delivered");
            break;

    case 5:

            printf("\nYou have ordered French Fries which will be shortly delivered");
            break;

}
    return 0;
}
// THIS IS MADE BY ARYA SHAH 25TCETGQ
