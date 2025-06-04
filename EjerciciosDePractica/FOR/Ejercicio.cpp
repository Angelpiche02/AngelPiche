#include <iostream>

using namespace std;

int main(){

    int resultado, numero;

    cout <<"Ingrese un numero"<< endl;
    cin >> numero;
    
    for (int i = 0; i <= 12; i++){

        resultado = numero * i;
        cout <<numero<<" x "<< i <<" = "<<resultado<<" "<<endl; 
    }



    return 0;
}