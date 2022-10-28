#include<stdio.h>
int main ()
{
    int open, close, drawing;

    scanf("%d %d %d", &open, &close, &drawing);
    int y = close||(open&&drawing);
    printf("%d\n", y);

    return 0;
}
