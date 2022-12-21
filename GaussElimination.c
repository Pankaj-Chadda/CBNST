#include<stdio.h>
#define m 3
int main()
{
    float a[m][m+1],x[m];
    for(int i=0;i<m;i++)
	{
		  for(int j=0;j<m+1;j++)
		  {
			   printf("a[%d][%d] = ",i,j);
			   scanf("%f", &a[i][j]);
		  }
	}
    float ratio=0;
    int i,j,k;
    for(i=0;i<m;i++)
    {   
        for(j=i+1;j<m;j++)
        {  
            ratio=a[j][i]/a[i][i];
            
            for(k=0;k<=m;k++)
            {   
                a[j][k]=a[j][k]-(ratio*a[i][k]);
                
            }
           // b[j]-=(ratio*b[i]);
            
            
        }
    }
    x[m-1]=a[m-1][m]/a[m-1][m-1];
    for(i=m-2;i>=0;i--)
    {
        float sum=0;
        for(j=i+1;j<m;j++)
        {
            sum=sum+a[i][j]*x[j];
        }
        x[i]=(a[i][m]-sum)/a[i][i];
    }
    for(i=0;i<m;i++)
    {
        printf("%f\n",x[i]);
    //     for(j=0;j<m;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    }
    return 0;
}