#include <stdio.h>

/*
 T1D6
 BOMBELKOWE SORTOWANIE NA WSKAZNIKACH HEHE
 Powodzenia bombelku, napisz ciało funkcji sortujPrzezWskazniki.
 Aby spełniała swoje zadanie i posortowała liczby rosnąco.
 */

void sortujPrzezWskazniki(int *tab, int rozmiar) {
    int temp;
    // miejsce na rozwiązanie
    for (int i = 0; i < rozmiar - 1; i++){
        for (int j = 0; j < rozmiar; j++){
            if(tab[j] > tab[j + 1]){
                temp = tab[j + 1];
                tab[j + 1] =  tab[j];
                tab[j] = temp;

            }
        }
    }
}

int main() {
    int liczby[] = {34, 67, 23, 28, 98, 15};
    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);

    printf("Tablica przed sortowaniem: \n");
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", liczby[i]);
    }
    printf("\n");

    sortujPrzezWskazniki(liczby, rozmiar);

    printf("Tablica po sortowaniu: \n");
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", liczby[i]);
    }
    printf("\n");

    return 0;
}