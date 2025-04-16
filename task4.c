#include <stdio.h>

void upper(char *arr)
{
    while(*arr != 0){
            if (*arr >= 97 && *arr <= 122){
                     printf("%c\n", *arr - 32);
               }else {
                        printf("%c\n", *arr);         
                    }
            ++arr;
        }
}

int main ()
{
    char arr[20] = "";
    printf("Write a word\n");
    scanf("%s", arr);

    upper(arr);
}
