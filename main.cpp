#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char nomi[5][15], cognomi[5][15];
    init(nomi);
    init(cognomi);
    inserimento(nomi, cognomi);

    char nome[15], cognome[15];
    inserisci_stringa(nome, 15);
    inserisci_stringa(cognome, 15);
    cout << endl;

    int id = ricerca(nomi, cognomi, nome, cognome);
    if (id != -1) {
        cout << "Trovato in posizione " << id << endl;
    } else {
        cout << "Non trovato" << endl;
    }

    return 0;
}
