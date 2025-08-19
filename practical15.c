#include<stdio.h>
#include<unistd.h>
void main()
{   int countdown;
    printf("\nEnter the countdown in seconds:");
    scanf("%d",&countdown);
    printf("\nCountdown Started");

if(countdown>0)
        while(countdown>=0)
    {
        printf("\nCountdown is %d",countdown);
        countdown--;
        sleep(1);
    }
else
        {
            printf("\nEnter valid input");
        }
            printf("\nCountdown stopped");
}

