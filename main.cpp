#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char nomi[5][15], cognomi[5][15];
    init(nomi);
    init(cognomi);
    inserimento(nomi, cognomi);
    
    char nome[15], cognome[15];
    inserimentonome(nome, 15);
    inserimentocognome(cognome, 15);
    
    int id = ricerca(nomi, cognomi, nome, cognome);
    if (id != -1) {
        cout << "Trovato in posizione " << id << endl;
    }
    else {
        cout << "Non trovato" << endl;
    }
    
    return 0;
}
