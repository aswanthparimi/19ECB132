#include<stdio.h>
int main()
{
    int i, fib[50];
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i < 10; i++)
	 {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("The fibonacci series is as follows ");
    for (i = 0; i < 10; i++) {
        printf("%d ", fib[i]);
    }
    return 0;
}




The fibonacci series is as follows 0 1 1 2 3 5 8 13 21 34 