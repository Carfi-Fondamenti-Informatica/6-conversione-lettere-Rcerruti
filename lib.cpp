#include "lib.h"
using namespace std;
bool funzione(char a, char &conversione){
    bool risultato=true;
    if ((a>=97 && a<=122)||(a>=65 && a<=90)){
        risultato=true;
        if(a<=122 && a>=97){
            conversione=a-32;
            return conversione;
        }else if(a>=65 && a<=90){
            conversione=a+32;
            return conversione;
        }
    }else{
        risultato=false;
    }
    return risultato;
}
