#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"mn_var.h"

int main(){
FILE *fp;
fp=fopen("output.txt","w");	
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
fprintf(fp,"Mean of the numbers is:%f\n",mv[0]);
fprintf(fp,"Variance is:%f\n",mv[1]);
fclose(fp);
return(0);
free(a);
}
