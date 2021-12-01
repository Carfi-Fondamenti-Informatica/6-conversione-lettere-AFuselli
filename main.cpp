#include <iostream>
#include "LibreriaLettere.h"
using namespace std;

int main() {
    char a;
    cin >> a;
    if (funzione(a)){
        cout << funzione(a);
    }else{
        cout << "errore";
    }
    return 0;
}
