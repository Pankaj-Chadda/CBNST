#include<stdio.h>
float f(float x,float y)
{
    return (x+y);
}
float RK_4(float y0,float k1,float k2,float k3,float k4)
{
    return(y0+(k1+2*k2+2*k3+k4)/6.0);
}
int main()
{
    float x0=0,y0=1;
    float h=0.2;
    float k1=h*f(x0,y0);
    float temp1=x0+(h/2.0);
    float temp2=y0+(k1/2.0);
    float k2=h*f(temp1,temp2);
    temp1=x0+(h/2.0);
    temp2=y0+(k2/2.0);
    float k3=h*f(temp1,temp2);
    temp1=x0+h;
    temp2=y0+k3;
    float k4=h*f(temp1,temp2);
    float result=RK_4(y0,k1,k2,k3,k4);
    printf("value of y:%f",result);
return 0;
}