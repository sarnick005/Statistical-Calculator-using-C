//AM,VARIANCE,SD & CV OF X
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\nEnter number of observations: ");
    scanf("%d",&n);
    int i;
    float xbar=0.0,sumx2=0.0,sumx=0.0;
    float a[n],b[n];
    for(i=1;i<=n;i++)
    {
      printf("\nEnter x: ");
      scanf("%f",&a[i]);
    }
     for(i=1;i<=n;i++)
    {
      b[i]=pow(a[i],2);
      sumx2=sumx2+b[i];
      sumx=sumx+a[i];
    }
    xbar=sumx/n;
    float xbar2=pow(xbar,2);
    float xi2=sumx2/n;
    float variance=xi2-xbar2;
    printf("\n\nVARIANCE: %f",variance);
    float sd=sqrt(variance);
    float cv=(sd/xbar)*100;
    printf("\nAM=%f",xbar);
    printf("\n\nSD: %f",sd);
    printf("CV=%f",cv);
    return 0;
}