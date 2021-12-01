//
// Created by Andrea Fuselli on 01/12/21.
//

#include "LibreriaLettere.h"
bool funzione(char a, char &invertito){
    bool ris=true;
    if((65<=a and a<=90)or(97<=a and a<=122)){
        ris=true;
        if(65<=a and a<=90){
            invertito=a+32;
            return invertito;
        }else if(97<=a and a<=122){
            invertito=a-32;
            return invertito;
        }
    }else {
        ris = false;
    }
    return ris;
}
