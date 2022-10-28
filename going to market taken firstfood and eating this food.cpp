#include<stdio.h>
int main ()
{
    int a,b,c;

    scanf("%d %d %d", &a, &b,&c);
    int y = a&&b&&c;
    printf("%d\n", y);

    return 0;
}
