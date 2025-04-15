#include <stdio.h>

void upper(char *arr)
{
    while(*arr != 0){
            printf("%c\n", *arr - 32);
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
