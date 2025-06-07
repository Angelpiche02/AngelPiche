//Fusión de Dos Arreglos
//Pide dos arreglos de N elementos y combínalos en un tercer arreglo.

#include <iostream>
using namespace std;

int main(){

    int n = 5;
    int array1[n];
    int array2[n];
    int array3[2 * n];

    cout <<"Ingrese "<< n << " elementos para el primer arreglo"<< endl;
    for (int i = 0; i < n; i++){
        
        cout <<"Elemento "<< i + 1<<" : ";
        cin >> array1[i]; 
    }
    cout <<"----------------------------------------------------"<< endl;

    cout <<"Ingrese "<< n << " elementos para el segundo arreglo"<< endl;
    for (int i = 0; i < n; i++){


        cout <<"Elemento "<< i + 1<<" : ";
        cin >> array2[i];
    }

    for(int i = 0; i < n; i++){

        array3[i] = array1[i];
        array3[i + n] = array2[i];
    }

    for(int i = 0; i < n * 2; i++){
        cout <<array3[i]<<" ";
    }

    return 0;
}
