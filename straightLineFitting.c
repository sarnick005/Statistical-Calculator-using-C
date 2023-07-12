//CURVE FITTING FOR A STRAIGHT LINE
#include<stdio.h>
#include<math.h>
void main()
{
    int i,n;
    printf("\nEnter number of observations: ");
    scanf("%d",&n);
    int x[n],y[n],x2[n],y2[n],xy[n];
    float xi,yi,sumx=0.0,sumy=0.0,sumx2=0.0,sumy2=0.0,sumxy=0.0,t=0.0,k=0.0,a=0.0,b=0.0;
    for(i=0;i<n;i++)
    {
        printf("\nEnter xi: ");
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nEnter yi: ");
        scanf("%d",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        x2[i]=pow(x[i],2);
        y2[i]=pow(y[i],2);
        xy[i]=x[i]*y[i];
    }
    for(i=0;i<n;i++)
    {
       sumx2=sumx2+x2[i];
       sumy2=sumy2+y2[i];
       sumxy=sumxy+xy[i];
    }
    a=(sumy*sumx2-sumxy*sumx)/(n*sumx2-sumx*sumx);
    b=(sumx*sumy-n*sumxy)/(sumx*sumx-n*sumx2);
    printf("y=%f(+)%fx",a,b);
}