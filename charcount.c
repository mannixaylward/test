#include <stdio.h>
/* count characters in input; 1st version */
int main()
{
/*    printf("First loop\n");
    long nc;
    int c;
    nc = 0;
    while (c = getchar() != EOF) {
        putchar(c);
        ++nc;
        printf("%ld\n", nc);
    }
*/
    printf("Second loop\n");
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}