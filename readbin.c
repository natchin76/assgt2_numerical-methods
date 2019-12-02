#include <stdio.h>
#include <stdlib.h>
int main()
{
  char ch;
  FILE *fp;
  fp=fopen("output.bin","rb");
  if (fp==NULL)
    printf("Error");
  while (ch!=EOF)
       {
  ch=fgetc(fp);
  putchar(ch);
    }
  fclose(fp);
  return 0;
}
    
