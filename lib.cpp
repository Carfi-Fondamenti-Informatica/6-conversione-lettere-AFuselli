//
// Created by Andrea Fuselli on 01/12/21.
//

#include "lib.h"
char funzione(char a){
    if((65<=a and a<=90)){
        a=a+32;
        return a;
    }else if(97<=a and a<=122){
        a=a-32;
        return a;
    }else{
        return 0;
    }

}

