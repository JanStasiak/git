#include <stdio.h>

int Policz(int a, int b);

int Policz(int a, int b)
{
    return a*b;
}

int main( )
{
    printf("Hello, World!\n");
    printf("W pierwszym branchu; 2*3=", Policz(2,3));
    return 0;
}
