#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main(int argc, char** argv){
    int num;
    bool wartosc;

    printf("Podaj liczbe pierwszą: ");
    scanf("%d", &num);

    if (isPrime(num)){
        printf("%d Tak to jest liczba pierwsza");
    }
    else {
        printf("%d Nie to jest liczba pierwsza");
    }
    return 0;
}

bool isPrime(int num){
    bool wartosc = true;
    for( int i = 2; i * i <=num; i++){
        if(num % i == 0){
            wartosc = false;
            break;
        }
    }
    return wartosc;
}