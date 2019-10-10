#include <stdio.h>
//Any thing out of main should be defined as extern
extern float a,b;
int main()
{
    //declaring of float
    float result,a, b;
    //declaring of int and pointer
    int *ptr ,q;
    //Assignment
    a=10.3;b=10.3;
    result=a+b;
    //%f to print float
    printf("Hello, Krithvika! your account balance is %f billion\n",a+b);
    //%d to scan int
    scanf(" %d", &q);
    //Assignment of address of q to the pointer
   ptr = &q;
    printf("Size of Q: %lu\n", sizeof(q));
    printf("Pointer of Q: %p\n", *ptr);
    int num;
    scanf("%4d",&num);
    printf("%d",num);

    return q;
}