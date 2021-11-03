#include <stdio.h>
#include <stdlib.h>
#define SIZEOF_ARRAY( arr ) sizeof( arr ) / sizeof( arr[0] )

int main ()
{
    int v[120], i, j;

    for (i = 1; i < 121; i++)
    {
        v[i] = rand() % 120 + 1;
    }

    int num = SIZEOF_ARRAY( v );
    printf(" tam vetor %d", &num);

    for (i = 1; i < num; i++)
    {
        j = 1;
        if (v[i] == i)
        {
            v[i] = i;
        }
        j++;
    }

    for(i= 1; i < num; i++)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}
