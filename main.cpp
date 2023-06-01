#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char nomi[5][15], cognomi[5][15];
    init(nomi);
    init(cognomi);
    
    for (int i = 0; i < 5; i++) {
        inserimento(nomi[i], 15);
        inserimento(cognomi[i], 15);
    }
    
 
    char nome[15], cognome[15];
    cout << "Inserisci il nome da cercare: ";
    inserimento(nome, 15);
    
    cout << "Inserisci il cognome da cercare: ";
    inserimento(cognome, 15);
    
    int id = ricerca(nomi, cognomi, nome, cognome);
    if (id != -1) {
        cout << "Trovato in posizione " << id << endl;
    } else {
        cout << "Non trovato" << endl;
    }
    
    return 0;
}
