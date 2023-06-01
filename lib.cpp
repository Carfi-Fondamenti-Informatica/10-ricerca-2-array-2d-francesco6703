#include "lib.h"
using namespace std;

void init(char mat[], int n) {
    for (int i = 0; i < n; i++) {
        mat[i] = ' ';
    }
}

void init(char mat[5][15]) {
    for (int i = 0; i < 5; i++) {
        init(mat[i], 15);
    }
}

void inserimento(char nomi[5][15], char cognomi[5][15]) {
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci nome #" << i + 1 << ": ";
        cin.getline(nomi[i], 15);
        cout << "Inserisci cognome #" << i + 1 << ": ";
        cin.getline(cognomi[i], 15);
    }
}

int ricerca(char nomi[5][15], char cognomi[5][15], char nome[], char cognome[]) {
    for (int i = 0; i < 5; i++) {
        if (strcmp(nomi[i], nome) == 0 && strcmp(cognomi[i], cognome) == 0) {
            return i;
        }
    }
    return -1;
}
