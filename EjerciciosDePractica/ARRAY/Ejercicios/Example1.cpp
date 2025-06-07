//Número Mayor y Menor
//Llena un arreglo con N números y encuentra el número mayor y el menor.

#include <iostream>

using namespace std;

int main (){

    int num[5];
    int mayor = 0;
    int menor = num[0];

    for (int i = 0; i < 5; i++){

        cout <<"Ingrese 5 elementos"<< endl;
        cin >> num[i];
    }
    for (int i = 0; i < 5; i++ ){

        if(num[i] > mayor){

            mayor = num[i];
        }
        if(num[i] < menor){
            
            menor = num[i];
        }
    }

        cout <<"El numero mayor es: "<<mayor<< endl;
        cout <<"El numero menor es: "<<menor<< endl;
    
    return 0;
}