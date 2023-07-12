//SKEWNESS AND KURTOSIS
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i;
    printf("\nEnter number of observations: ");
    scanf("%d",&n);
   float x[n],f[n],sumfi=0,sumfixi=0,sumfixi2=0,sumfixi3=0,sumfixi4=0;
   float m1=0,m2=0,m3=0,m4=0,m1_x=0,m2_x=0,m3_x=0,m4_x=0;
   for(i=0;i<n;i++)
   {
    printf("\nEnter xi: ");
    scanf("%f",&x[i]);
   }
      for(i=0;i<n;i++)
    {
    printf("\nEnter fi: ");
    scanf("%f",&f[i]);
   }
    for(i=0;i<n;i++)
   {
     sumfi=sumfi+f[i];
     sumfixi=sumfixi+(x[i]*f[i]);
     sumfixi2=sumfixi2+(f[i]*pow(x[i],2));
     sumfixi3=sumfixi3+(f[i]*pow(x[i],3));
     sumfixi4=sumfixi4+(f[i]*pow(x[i],4));
   }
   m1=sumfixi/sumfi;
   m2=sumfixi2/sumfi;
   m3=sumfixi3/sumfi;
   m4=sumfixi4/sumfi;
   m1_x=0;
   m2_x=m2-pow(m1,2);
   m3_x=m3-(3*m2*m1)+2*pow(m1,3);
   m4_x=m4-(4*m3*m1)+(6*m2*pow(m1,2))-3*pow(m1,4);
   float sd=sqrt(m2_x);
   float skewness=m3_x/(pow(sd,3));
   float kurtosis=m4_x/(pow(sd,4))-3;
   printf("\n%f",m1_x);
   printf("\n%f",m2_x);
   printf("\n%f",m3_x);
   printf("\n%f",m4_x);
  printf("\nSD=%f",sd);
  printf("\nSKEWNESS=%f",skewness);
  printf("\nKURTOSIS=%f",kurtosis); 
}