#include <stdio.h>

int main(int argc, char* argv[])
{
    int x[5];
    printf("Please enter an integer : ");
    scanf("%d",x);
    printf("the integer entered was %d \n", *x);
    return 0;
}