#include <stdio.h>
//Any thing out of main should be defined as extern
extern int q;
extern float a,b;
int main()
{
    //declaring of float
    float result,a, b;;
    //declaring of int and pointer
    int *ptr ,q;
    //Assignment
    a=10.3;b=10.3;
    result=a+b;
    //%f to print float
    printf("Hello, Krithvika! your account balance is %f billion\n",a+b);
    //%d to scan int
    scanf("please enter your withdraw intrest: %d", &q);
    //Assignment of address of q to the pointer
    *ptr=&q;
    printf("Size of Q: %lu\n", sizeof(q));
    printf("Pointer of Q: %d\n", *ptr);
    return q;
}