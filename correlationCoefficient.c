//CORRELATION COEFFICIENT OF X & Y
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j;
    printf("\nenter number of obsrvations: ");
    scanf("%d",&n);
    int x[n],y[n],x1[n],y1[n],z[n];
    float sumx=0.0,sumy=0.0,sumxy=0.0,cov=0.0,varx=0.0,vary=0.0,rxy=0.0,deno=0.0,p1=0.0,p2=0.0,xbar=0.0,ybar=0.0,sumx2=0.0,sumy2=0.0;
    for(i=0;i<n;i++)
    {
        printf("\nEnter x: ");
        scanf("%d",&x[i]);
        printf("\nEnter y: ");
        scanf("%d",&y[i]);

    }
    printf("\n\nX :");
    for(i=0;i<n;i++)
    {
        printf("\t%d",x[i]);
    }
    printf("\n");
    printf("Y :");
     for(i=0;i<n;i++)
    {
        printf("\t%d",y[i]);
    }
    for(i=0;i<n;i++)
    {
         x1[i]=pow(x[i],2);
        sumx2=sumx2+x1[i]; //sum of x2
         y1[i]=pow(y[i],2);
        sumy2=sumy2+y1[i]; //sum of y2
        sumx=sumx+x[i]; //sum of x
        sumy=sumy+y[i];  // sum of y
        z[i]=x[i]*y[i];
        sumxy=sumxy+z[i]; //sum of xy

    }
   cov=(sumxy/n)-(sumx/n)*(sumy/n);
   xbar=sumx/n;
   ybar=sumy/n;
   printf("\nxbar=%f",xbar);
   printf("\nybar=%f",ybar);
   printf("\nsumx2=%f",sumx2);
   printf("\nsumy2=%f",sumy2);
   printf("\nsumxy=%f",sumxy);
   p1=pow((xbar),2);
varx=(sumx2/n)-p1;
p2=pow((ybar),2);
vary=(sumy2/n)-p2;
deno=sqrt(varx*vary);
rxy=cov/deno;
printf("\n\nvx=%f\nvy=%f\ncov=%f",varx,vary,cov);

printf("\nrxy=%f",rxy);
}