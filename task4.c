#include <stdio.h>

void upper(char *arr)
{
    while(*arr != 0){
            if (*arr >= 97 && *arr <= 122){
                     *arr -= 32;
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
    printf("%s\n", arr);
}
