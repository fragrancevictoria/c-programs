//function of area of a circle
#include<stdio.h>
#define pi 3.142
int area(int r);
int main()
{
    int a,b,area;
    printf("Enter value of a,b:");
    scanf("%d%d",&a,&b);
    area=pi*a*b;
    printf("area is %d",area);
    return 0;
}
//function definition
int area(int a)
{
    int area;
    area=pi*a;
    return area;
}