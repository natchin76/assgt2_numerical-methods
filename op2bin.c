#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char str[]="The mean is: 3383.5\nThe variance is: 9146728.0";
	fp=fopen("output.bin","wb");
	if (fp==NULL)
	{
		printf("Error");
	}
	else
	  {
	    printf("Success\n");
	      }
	fwrite(str,sizeof(str),1,fp);
	fclose(fp);
	return 0;
}
