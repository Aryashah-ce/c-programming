#include<stdio.h>
int main()
{
    float marks;
printf("Enter your marks:");
scanf("%f",&marks);
    if(marks>=90)\
    {
        printf("You have secured A grade!! Congratulations!!");
    }
    else if(marks<90 && marks>=80)
    {
        printf("You have secured B grade!! Work a bit harder!!");
    }
    else if(marks<80 && marks>=70)
    {
        printf("You have secured C grade!! Need to work hard");

    }
    else if(marks<70 && marks>=60)
    {
        printf("You have secured D grade!!");
    }
    else
    {
        printf("You are failed, Meet me in the staff room");
    }
    return 0;
}
// This is made by ARYA SHAH 25TCETGQ
