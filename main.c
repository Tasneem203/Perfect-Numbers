#include <stdio.h>
#include <stdlib.h>

int main()
{

int n;
int i;
int sum = 0;

for ( i=1; i<1000; i++)
{
    n=1;
    while(n<=(i/2))
    {

        if (i%n == 0)

        sum = sum + n;
        n++;

    }

    if (sum ==i)
    {
    printf(" %d is a Perfect Number\n" ,i);
    }
    sum=0;
}


    return 0;
}
