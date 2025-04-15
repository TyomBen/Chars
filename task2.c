#include <stdio.h>

char *strcut(char *str1, char *str2)
{
    char *ptr = str1;

    while(*str1 != '\0'){
            ++str1;
        }
    while(*str2 != '\0'){
        *str1 = *str2;
         ++str1;
         ++str2;
        }
        *str1 = '\0';
        return ptr;
}

int main ()
{
    char str1[20] = "Hello";
    char *str2 = "world";
    printf("%s\n", strcut(str1, str2));
}
