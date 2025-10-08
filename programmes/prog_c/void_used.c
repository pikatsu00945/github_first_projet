#include <stdio.h>

void* ma_fonction(void* parametre) {
    return parametre;
}


int main (int agrc, char** argv) {

    char* ma_chaine = "papa";
    int mon_nombre = 4;

    // pointeur de fonction
    void* (*func_point)(void*) = NULL;
    func_point = ma_fonction;

    printf("size of ma chaine : %s\n",(char*) ma_fonction(ma_chaine));
    printf("size of mon nombre : %d\n", *(int*) func_point(&mon_nombre));

    // *(int*) renvoie la valeur du pointeur et non son adresse. (int*) renvoie plutôt l'adresse
    printf("\nFin\n");

    return 0;
}