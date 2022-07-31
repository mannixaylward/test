#include <stdio.h>

int main()
{
    char a[] = {'A', 'B', 'C'};
    int b[] = {10, 20, 30};
    __int8_t c;
    __int16_t d;
    __int32_t e;
    __int64_t f;
    __int128_t g;

    printf("\n");
    printf("length of a: %ld\n",sizeof(a));
    printf("length of b: %ld\n",sizeof(b));
    printf("length of c: %ld\n",sizeof(c));
    printf("length of d: %ld\n",sizeof(d));
    printf("length of e: %ld\n",sizeof(e));
    printf("length of f: %ld\n",sizeof(f));
    printf("length of g: %ld\n",sizeof(g));

    printf("index 0,1,2 %c,%c,%c\n",a[1+1],a[1],a[2]);
    printf("index 0,1,2 %d,%d,%d\n",b[0],b[1],b[2]);

    printf("number in array = %ld\n",sizeof(b)/sizeof(b[0]));


    return 0;
}