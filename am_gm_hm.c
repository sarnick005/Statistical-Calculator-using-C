// CALCULATING AM,GM AND HM
#include<stdio.h>
#include<math.h>
void am(float *,int );
void main()
{
  int n,i;
  printf("\nEnter number of obs.: ");
  scanf("%d",&n);
  float a[n];
  for(i=0;i<n;i++)
  {
    printf("\nEnter observations: ");
    scanf("%f",&a[i]);
  }
 am(&a[0],n);

}
void am(float *j,int n)
{
  float sum=0.0,m=1.0,amean=0.0,gmean=0.0,hmean=0.0;
  int i;
  for(i=0;i<n;i++)
  {
    sum=sum+*j;
    m=m*(*j);
    j++;
  }
amean=(float)sum/n;
float z=pow(n,-1);
gmean=pow(m,z);
hmean=pow(gmean,2)/amean;
printf("\nAM=%f",amean);
printf("\nGM=%f",gmean);
printf("\nHM=%f",hmean);
}
