#include<gsl/gsl_statistics_float.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"mn_var.h"

int main(){
int i;
float mv[2];
float* a=(float*)malloc(100*sizeof(float));
float mean,var,m2,v2;
for(i=0;i<100;i++)
{
a[i]=pow(i+1,2);
}
mv[0]=*stat(100,a);
mv[1]=*(stat(100,a)+1);
m2=gsl_stats_float_mean(a,1,100);
v2=gsl_stats_float_variance(a,1,100);  /*variance and mean from gsl library*/
printf("Mean of the numbers is(by loop):%f\n",mv[0]);
printf("Mean of the numbers is(by gsl):%f\n",m2);
printf("Variance is:%f\n(by loop)",mv[1]);
printf("Variance is:%f\n(by gsl)",v2);
return(0);
free(a);
}
