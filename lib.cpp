#include <iostream>
#include "lib.h"
using namespace std;

void init (char mat[], int n){ //nomi
    for(int i=0;i<n;i++){
        mat[i]= ' ';
    }
}
void init(char mat[5][15]){ // cognomi
    for(int i=0;i<5;i++){
        init(mat[i],15);
    }
}


void inserimento(char str[], int size) {
    cin.getline(str, size);
}


bool controllo1(char nomi[5][15], char nome[]) {
    for (int i = 0; i < 5; i++) {
        int j = 0;
        while (nomi[i][j] != '\0' && nome[j] != '\0') {
            if (nomi[i][j] != nome[j]) {
                break;
            }
            j++;
        }
        if (nomi[i][j] == '\0' && nome[j] == '\0') {
            return true;
        }
    }
    return false;
}



bool controllo2(char cognomi[5][15], char cognome[]) {
    for (int a = 0; a < 5; a++) {
        int j = 0;
        while (cognomi[a][j] != '\0' && cognome[j] != '\0') {
            if (cognomi[a][j] != cognome[j]) {
                break;
            }
            j++;
        }
        if (cognomi[a][j] == '\0' && cognome[j] == '\0') {
            return true;
        }
    }
    return false;
}

int ricerca(char nomi[5][15], char cognomi[5][15], char nome[], char cognome[]) {
    for (int i = 0; i < 5; i++) {
        if (controllo1(nomi, nome)  && controllo2(cognomi, cognome)) {
            return i;
        }
    }
            return -1;
    }
