#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void) {
  printf("Exercice 00 : ft_strcmp \n\n");
  char str1[] = "123", str2[] = "123";
  printf("Result: %d\n\n", ft_strcmp(str1, str2));
  printf("Expected outcome: %d \n", strcmp(str1, str2));
}