#include <stdio.h>

void strcamp(char *str1)
{
    while(*str1 != '\0'){
            if(*str1 >= 48 && *str1 <= 57){
                    printf("%c\n", *str1);
                }
                ++str1;
        }
}

int main()
{
    char str1[20] = "";

    printf("Write a word with some numbers\n");
    scanf("%s", str1);

    strcamp(str1);
}
