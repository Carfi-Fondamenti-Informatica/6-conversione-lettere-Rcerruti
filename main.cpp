#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char a, conversione=0;
    cin>>a;
    if(funzione(a, conversione)){
        cout<<conversione;
    }else{
        cout<<"errore";
    }
    return 0;
}
