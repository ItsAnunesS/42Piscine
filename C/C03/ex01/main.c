#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void) {
  printf("Exercice 01 : ft_strncmp \n\n");
  char str1[] = "13443", str2[] = "13345";
  int nbr = 4;
  printf("Result: %d\n\n", ft_strncmp(str1, str2, nbr));
  printf("Expected outcome: %d \n", strncmp(str1, str2, nbr));
}