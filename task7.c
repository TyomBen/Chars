#include <stdio.h>

int _strchr (char *str, char c)
{
    int flag = 0;
    while(*str != '\0'){
            if (*str == c){
                   return 1;
                   break;
                }
            ++str;
        }
        return 0;
}
int main ()
{
    char *str = "Artyom";
    char c = 'o';
    int strchr =_strchr(str, c);
    printf("%d\n", strchr);
}

