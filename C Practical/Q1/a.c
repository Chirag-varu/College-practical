
// Q1. a. Write an algorithm and draw flowchart for Area of circle

#include<stdio.h>
#include<conio.h>

void main()
{
    int x, area;
    // clrscr();

    printf("Enter the radius od circle: ");
    scanf("%d",&x);
    printf("\n");

    area = 3.14 * x *2;
    printf("Area of circle is : %d",area);
    // getch();
}
