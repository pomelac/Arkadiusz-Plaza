#include <stdio.h>

int main()
{
    int zm;
    int ile = 1;
    printf("Podaj %d. wartosc parametru: ", ile);
    scanf("%d", &zm);
    while (zm != 99)
    {

        if (zm >= -5 && zm <= 5)
        {
            printf("Aktualna wartosc parametru: %d \n", zm);
        }
        else
        {
            printf("Bledna wartosc parametru!\n");
        }
        ile++;
        printf("Podaj %d. wartosc parametru: ", ile);
        scanf("%d", &zm);

        
    }

    return 0;
}