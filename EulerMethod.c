#include<stdio.h>
float f(float x,float y)
{
    return (x+y);
}
int main()
{
    float x0=0,h;
    float y0,y1,x;
    int i=0,n;
    printf("Enter the value of x0:");
    scanf("%f",&x0);
    printf("\nEnter the value of y0:");
    scanf("%f",&y0);
    printf("\nEnter the value of n:");
    scanf("%d",&n);
    printf("\nEnter the value of x:");
    scanf("%f",&x);
    h=(x-x0)/n;
    for(i=1;i<=n;i++)
    {
        y1=y0+h*f(x0,y0);
        x0=x0+h;
        y0=y1;
    }
    printf("Value of y:%f",y0);
return 0;
}