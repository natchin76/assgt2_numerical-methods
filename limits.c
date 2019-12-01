#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
printf("Max of char:%d\n",CHAR_MAX);
printf("Min of char:%d\n",CHAR_MIN);
printf("Max of int:%d\n",INT_MAX);
printf("Min of int:%d\n",INT_MIN);
printf("Max of long int:%ld\n",LONG_MAX);
printf("Min of long int:%ld\n",LONG_MIN);
printf("Max of float:%.10e\n",FLT_MAX);         /*%.10e for printing in scientific notatio*/
printf("Min of float:%.10e\n",-FLT_MAX);
printf("Max of double:%.10e\n",DBL_MAX);
printf("Min of double:%.10e\n",-DBL_MAX);
return(0);
}
