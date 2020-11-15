#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void) {
  printf("Exercice 02 : ft_strcat \n\n");
  char str1[100] = "Hello, ", str2[] = "Pinguin Dança 42";
  char str3[100] = "Hello, ", str4[] = "Pinguin Dança 42";

  ft_strcat(str1, str2);
  printf("Result: %s\n\n", str1);

  strcat(str3, str4);
  printf("Expected outcome: %s \n", str3);
}