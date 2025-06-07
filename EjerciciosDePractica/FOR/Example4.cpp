//Triángulo de Asteriscos
//Imprime un triángulo de altura N usando *

#include <iostream> 
using namespace std;

int main(){

    int altura;
    string linea;

        cout <<"Ingrese la altura: "<< endl;
        cin >> altura;
        
        for(int i = 0; i <= altura; i++){

            linea += "*";
            
            cout <<linea<< endl;
        }


    return 0;
}