//Contar Números Pares e Impares
//Llena un arreglo con N números y cuenta cuántos son pares y cuántos son impares.

#include <iostream>

using namespace std;

int main(){

    int array[10] = {1,7,9,6,4,67,54,51,23,92}; 
    int par = 0, impar = 0;

    for (int i = 0; i < 10; i++){

        if (array[i] % 2 == 0){

            cout << array [i] << " es par"<< endl;

            par++;
        }

        else{

             cout << array [i] << " es impar"<< endl;

             impar++;
        }
    }


    cout <<"La cantidad de pares es: " << par << endl;
    cout <<"La cantidad de impares es: " << impar << endl;
    
    return 0;
}