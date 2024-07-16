#include <stdio.h>

int
main()
{
  FILE *fP = fopen("test.txt","r");
  char buf[80];
  if (!fP)
    return 1; // FILE READ ERROR
  while (fgets(buf, 80, fP) != 0)
  {
    printf("%s", buf);
  }
  printf("\n");
  fclose(fP);
  return 0;
}
