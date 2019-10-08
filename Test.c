#include <stdio.h>

int main()
{
    int *ptr , q;
    printf("Hello, Krithvika!\n");
    scanf("%d",&q);
    ptr=&q;
    printf("%d",sizeof(q));
    printf("%d",*ptr);
    return q;
}