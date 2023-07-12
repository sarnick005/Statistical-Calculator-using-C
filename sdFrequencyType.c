//VARIANCE AND SD OF X FREQUENCY TYPE
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\nEnter number of observations: ");
    scanf("%d",&n);
    int i;
    float xbar=0.0,sumfx2=0.0,sumxf=0.0,F=0.0;
    float x[n],b[n],f[n],a[n],t[n],r[n];
    for(i=1;i<=n;i++)
    {
      printf("\nEnter x: ");
      scanf("%f",&x[i]);
    }
    for(i=1;i<=n;i++)
    {
      printf("\nEnter frequency: ");
      scanf("%f",&f[i]);
    }
     for(i=1;i<=n;i++)
    {
      b[i]=pow(x[i],2);
      t[i]=b[i]*f[i];
      sumfx2=sumfx2+t[i];
      r[i]=f[i]*x[i];
      sumxf=sumxf+r[i];
      F=F+f[i];
    }
    xbar=sumxf/F;
    float xbar2=pow(xbar,2);
    float xifi2=sumfx2/F;
    float variance=xifi2-xbar2;
    printf("\n\nN= %f",F);
    printf("\nxbar= %f",xbar);
    printf("\nfx= %f",sumfx2);
    printf("\n\nVARIANCE= %f",variance);
    float sd=sqrt(variance);
    printf("\n\nSD= %f",sd);
    return 0;
}