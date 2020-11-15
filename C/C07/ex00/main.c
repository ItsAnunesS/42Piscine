#include<stdio.h> 
#include<string.h> 

char *ft_strdup(char *src);

int main(void) {
  printf("Exercice 00 : ft_strdup \n\n");
	char source[] = "           "; 
	char *str = strdup(source); 
	char *str2 = ft_strdup(source);
  printf("Result: %s \n", str2);
  printf("Expected outcome: %s \n", str);
}
