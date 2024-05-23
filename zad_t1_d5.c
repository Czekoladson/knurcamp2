#include <stdio.h>
#include <stdlib.h>

/*
 T1D5 - Pamiętaj bo pamięć to rzecz święta xD (pzdr bonusrpk)
 Zarządzanie pamięcią - utrwalenie
 22.05.2025


 Postępuj zgodnie z instrukcjami w komentarzach, i dopisz brakujący kod.
 Zwróć uwagę na użycie funkcji calloc i free.
 Zastanów się, dlaczego używamy calloc zamiast malloc.
 */

int main(void) {
    int num;
    // Zadanie 1: Poproś użytkownika o podanie liczby elementów
    printf("Podaj Liczbe elementów:");
    scanf("%d",&num);
    // Zadanie 2: Przydziel pamięć dynamicznie dla 'n' elementów używając calloc
    int *array = (int *)calloc(num,sizeof(int));
    // Zadanie 3: Sprawdź, czy pamięć została pomyślnie przydzielona
    if (array == NULL){
        printf("Coś sie zjebało!\n");
        return 1;
    }

    printf("Prawidłowo przydzielona\n");

    // Zadanie 4: Wprowadź elementy do przydzielonej pamięci
    for (int i = 0; i < num; i++){
        printf("Podaj element dla array[%d]: ", i);
        scanf("%d",&array[i]);
    }
    // Zadanie 5: Wyświetl te elementy
    printf("Elementy tablicy:");
    for (int i = 0; i < num; i++){
        printf("\n============\n%d",array[i]);
    }
    // Zadanie 6: Zwolnij przydzieloną pamięć
    free(array);

    return 0;
}