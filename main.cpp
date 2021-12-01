#include <iostream>
#include "LibreriaLettere.h"
using namespace std;

int main() {
    char a;
    cin >> a;
    if (funzione(a)==0){
        cout << "errore";
    }else{
        cout << funzione(a);
    }
    return 0;
}
