#include <stdio.h>

int
main()
{
  // FOPEN SECOND ARGUMENT ALSO TAKES "a"
  // FOR APPEND.
  FILE *fP = fopen("test.txt", "a");
  if (fP == 0)
    return 1; // FILE READ ERROR
  fprintf(fP,"TEST APP TEST APP\n");
  return 0;
}
