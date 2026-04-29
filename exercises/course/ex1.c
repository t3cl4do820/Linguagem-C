#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main(void) {

    int *arr = malloc(SIZE * sizeof(int));

    if (arr == NULL) {
        printf("Erro ao alocar memoria \n");
        free(arr);
        return 1;
    }

    *(arr + 0) = 6;
    *(arr + 1) = 5;
    *(arr + 2) = 9;

    int bigger, smaller;

    if (*(arr + 0) > *(arr + 1) && *(arr + 0) > *(arr + 2)) {
       bigger = *(arr + 0); 
    } else {
        bigger = *(arr + 2);
    }

    if (*(arr + 1) > *(arr + 2)) {
        bigger = *(arr + 1);
    } else {
        bigger = *(arr + 2);
    }

    if (*(arr + 0) < *(arr + 1) && *(arr + 0) < *(arr + 2)) {
        smaller = *(arr + 0);
    } else {
        smaller = *(arr + 2);
    }

    if (*(arr + 1) < *(arr + 2)) {
        smaller = *(arr + 1);
    } else smaller = *(arr + 2);

    free(arr);


    printf("Big: %d e Small: %d \n", bigger, smaller);
    
    return 0;
}
