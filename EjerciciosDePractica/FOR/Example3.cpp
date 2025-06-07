//Serie de Números Alternados
//Imprime la serie: 1, -2, 3, -4, 5, -6, ... hasta N.

#include <iostream> 
using namespace std;

int main(){

    int limite, digito;

    cout <<"Ingrese un limite"<< endl;
    cin >> limite;

    for(int i = 1; i <= limite; i++){

        if(i % 2 != 0){

            cout <<i<< ", ";
        }
    
        else if(i % 2 == 0){

            digito = i * -1;
            cout <<digito<< ", ";
        }
        
    }

    return 0;
}