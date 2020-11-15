#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void) {
  printf("Exercice 03 : ft_strncat \n\n");
  char dest[30] = "Using strncat function, ";
  char src[50] = " this part is added and this is ignored";
  char dest1[30] = "Using strncat function, ";
  char src2[50] = " this part is added and this is ignored";

  ft_strncat(dest, src, 19);
  printf("Result: %s \n\n", dest);

  strncat(dest1, src2, 19);
  printf("Expected outcome: %s \n", dest1);
}