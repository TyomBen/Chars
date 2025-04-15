#include <stdio.h>

void firstUpper (char *arr)
{
    int count = 0;
    while(*arr != '\0'){
            if (count == 0){
                    *arr -= 32;
                }else if (count != 0 && *arr >= 65 && *arr <= 90){
                    *arr += 32;
                    }
             ++arr;
             ++count;
          }
}   

int main ()
{
    char arr[] = "hEllO";
    firstUpper(arr);
    printf("%s\n", arr);
}
