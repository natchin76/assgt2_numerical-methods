#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
int i;
float* a=(float*)malloc(100*sizeof(float));
for(i=0;i<100;i++)
{
printf("%f\n",&a[i]);
}
for(i=0;i<100;i++)
{
a[i]=pow(i+1,2);
}


return(0);
free(a);
}
