//Número Primo
//Pide un número y determina si es primo.

#include <iostream>
using namespace std;

int main(){

    int numero;
    bool esPrimo = true;

    cout <<"Ingrese un numero para ver si es primo"<< endl;
    cin >>numero;

    if (numero <= 1){

        cout <<numero<<" No es primo"<< endl;
        return 0;
    }
    else {

        for(int i = 2; i < numero; i++){
            if (numero % i == 0){

                esPrimo = false;
                
                break;      //Se usa para romper el ciclo
            }
        }

        if(esPrimo){
        cout <<numero<<" Es primo"<< endl;
        }

        else{
            cout <<numero<< " No es primo"<< endl;
        }
    }

    return 0;
}