#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void) {
  printf("Exercice 05 : ft_strlcat \n\n");
  char str1[3] = "ABC";
  char str2[100] = "DEF";
  unsigned int size;
  size = 10;
  
  printf("Result: %i \n\n", ft_strlcat(str1, str2, sizeof(str1)));
}