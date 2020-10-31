#include <stdio.h>
#define PROG 20

int main()
{
    int temperatura;
    printf("Podaj temperature we Wroclawiu: ");
    scanf("%d", &temperatura);
    if (temperatura >= PROG)
    {
        printf("Jest bardzo ladna pogoda!\n");
    }
    else
    {
        printf("Nie jest zbyt cieplo!\n");
    }

    return 0;
}