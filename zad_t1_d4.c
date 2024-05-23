#include <stdio.h>

// Prototyp funkcji swap
void swap(int *a, int *b);

int main() {
    int x = 5;
    int y = 10;

    printf("Przed zamianą: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Po zamianie: x = %d, y = %d\n", x, y);

    return 0;
}

// Definicja funkcji swap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
