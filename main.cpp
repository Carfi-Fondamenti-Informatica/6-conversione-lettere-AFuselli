#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a, invertito=0;
    cin >> a;
    if (funzione(a,invertito)){
        cout << invertito;
    }else{
        cout << "errore";
    }
    return 0;
}
