#include<stdio.h>
int main()

{
    int length=70,breadth=90,area,perimeter;

    area=length*breadth;
    perimeter=2*(length+breadth);

    printf("%d is an area of rectangle\n",area);
    printf("%d is an perimeter of rectangle\n",perimeter);
    return 0;
}
