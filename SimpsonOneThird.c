#include<stdio.h>
#include<math.h>
double f(double x)
{
    // return (log10(x));
    return (log(x));
}
int main()
{
    double x0,xn,h,result;
    int n;
    printf("Enter the value of x0:");
    scanf("%lf",&x0);
    printf("\nEnter the value of xn:");
    scanf("%lf",&xn);
    printf("\nEnter the value of n:");
    scanf("%d",&n);
    h=(xn-x0)/n;
    printf("Value of n:%d\n",n);
    double y[n+1];
    for(int i=0;i<=n;i++)
    {
        y[i]=f(x0+h*i);
    }
    double sum1=0,sum2=0;
    for(int i=1;i<n;i=i+2)
    {
        sum1+=y[i];
    }
    for(int i=2;i<=n-2;i=i+2)
    {
        sum2+=y[i];
    }
    result=(h/3)*(y[0]+y[n]+4*sum1+2*sum2);
    printf("\nResult is :%lf",result);
}