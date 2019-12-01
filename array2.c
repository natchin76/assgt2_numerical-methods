#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"mn_var.h"

int main(){
int i;
float mv[2];
float* a=(float*)malloc(100*sizeof(float));
float mean,var;

for(i=0;i<100;i++)
{
a[i]=pow(i+1,2);
}
mv[0]=*stat(100,a);
mv[1]=*(stat(100,a)+1);
printf("Mean of the numbers is:%f\n",mv[0]);
printf("Variance is:%f\n",mv[1]);
return(0);
free(a);
}
