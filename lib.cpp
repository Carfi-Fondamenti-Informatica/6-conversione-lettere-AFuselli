//
// Created by Andrea Fuselli on 01/12/21.
//

#include "LibreriaLettere.h"
using namespace std;
bool funzione(char a, char &invertito){
    bool ris=true;
    if((a>=97 && a<=122)||(a>=65 && a<=90)){
        ris=true;
        if(a<=122 && a>=97){
            invertito=a-32;
            return invertito;
        }else if(a>=65 and a<=90){
            invertito=a+32;
            return invertito;
        }
    }else {
        ris = false;
    }
    return ris;
}
