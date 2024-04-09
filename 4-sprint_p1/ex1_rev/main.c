#include <stdio.h>
#include <stdlib.h>

int main()
{
    char l1='s',l2='i',l3='m';
    int n,resto;
    scanf("%d%*c",&n);
    resto=n%2;
    l1+=resto*(-5);
    l2+=resto*(-8);
    l3+=resto*2;
    printf("%c%c%c",l1,l2,l3);
    return 0;
}
