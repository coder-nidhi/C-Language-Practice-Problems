#include <stdio.h>
#include<string.h>

int main()
{
    char firstStr[100] = "Hello ";
    char secondStr[] = "World";
    strcat(firstStr, secondStr);
    puts(firstStr);
    
    return 0;
}

