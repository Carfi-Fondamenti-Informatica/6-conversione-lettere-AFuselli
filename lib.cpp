
#include "LibreriaLettere.h"
char funzione(char a){
    if((65<=a and a<=90)or(97<=a and a<=122)){
        if(65<=a and a<=90){
            a=a+32;
            return a;
        }else if(97<=a and a<=122){
            a=a-32;
            return a;
        }
        return true;
    }else{
        return false;
    }
}
