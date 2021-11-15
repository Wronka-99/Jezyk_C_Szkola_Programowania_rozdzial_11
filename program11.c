#include <stdio.h>
#include <stdlib.h>

/*
*Do pobrania ciągu znaków służą trzy funkcje: gets, scnaf oraz fgets.
*Gets pobiera znaki aż do pojawienia się znaku nowej linii. 
*Scanf pobiera tylko pojedyncze słowo do spacji.
*
*
*
*
*/

#define SIZE 16

int main()
{
    char slowa[SIZE];
    printf("Podaj swoje wyrazenie.\n");
    gets(slowa);
    printf("Wypisanie łańcucha na dwa sposoby:\n\n");
    puts(slowa);
    printf("%s\n", slowa);
    printf("Koniec programu.\n");

    return 0;
}