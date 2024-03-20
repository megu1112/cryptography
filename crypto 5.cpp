#include <stdio.h>

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() 
{
    int i;
    printf("Allowed values of 'a' for the affine Caesar cipher:\n");
    for (i = 1; i < 26; i++) 
	{
        if (gcd(i, 26) == 1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}

   

