#include <stdio.h>
#define KONIEC 99
#define MAX 10
#define MIN -10
#define ILOSC 4
#define MAX_P 14
#define MIN_P 8

int main()
{
    int dana, dana_p = 0;
    int przeciecia = 0;
    int ile = 0;

    while (dana != KONIEC)
    {
        scanf("%d", &dana);
        ile++;
        if (dana >= MIN && dana <= MAX)
        {
            if (dana * dana_p < 0)
            {
                przeciecia++;
            }
            if (dana != 0)
            {
                dana_p = dana;
            }
        }
        if (ile == ILOSC)
        {
            if (przeciecia >= MIN_P && przeciecia <= MAX_P)
            {
                printf("poprawne %d \n", przeciecia);
            }
            else
            {
                printf("nie poprawne %d \n", przeciecia);
            }
            ile = 0;
            przeciecia = 0;
            dana_p = 0;
        }
    }

    return 0;
}

