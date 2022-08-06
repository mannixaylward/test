#include <stdio.h>

int printstring(char *astring)
{
    printf("%s\n",astring);
    return 0;
}


int main()
{
    int a, b = 0;
    char test[20] = "Hello, World";
    printstring(test);
    return 0;
}