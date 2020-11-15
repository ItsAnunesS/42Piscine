#include <stdio.h>
#include <stdlib.h>
#include <string.h>
​
char *ft_strstr(char *dest, char *to_find);

int main(void) {
    char *largestring = "Foo Bar Baz";
    char *smallstring = "Bar";
    char *ptr;
    
    ptr = strstr(largestring, smallstring);
    
    printf("Large string: %s\n\n", largestring);
    printf("Small string: %s\n\n", smallstring);
    
    printf("Command: %s \n", ptr);
    
    printf("Function: %s\n\n", ft_strstr(largestring, smallstring));
}
