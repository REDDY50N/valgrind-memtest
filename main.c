#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[20] = "Hello";
  printf(str);

  // allocate heap space without freeing
  char* arr = malloc(20);

  // copy string
  strcpy(str, "Hello World");
  printf("\n%s\n", str);

  // if memory is not freed here, you'll get a memory leak
  // free(arr);
}
