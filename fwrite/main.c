#include <stdio.h>

int
main()
{
  // FOPEN SECOND ARGUMENT ALSO TAKES "a"
  // FOR APPEND.
  FILE *fP = fopen("test.txt", "w");
  if (fP == 0)
    return 1; // FILE READ ERROR
  fprintf(fP,"TEST WRITE TEST WRITE\n");
  return 0;
}
