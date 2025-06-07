//Eliminar un Elemento
//Pide N números, guárdalos en un arreglo y permite al usuario eliminar un número específico.

#include <iostream>

using namespace std;

int main(){

    int n = 0, num[n];

    cout <<"Ingrese el numero de elementos del arreglo: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){

        cout <<"Ingrese el numero "<< i + 1 << " del arreglo: ";
        cin >> num[i];
    }

    cout <<"-----------------------------------------------------"<< endl;

    cout <<"Que numero deseas eliminar del array: "<<endl;
    
    for(int i = 0; i < n; i++){
    cout <<num[i]<< " ";
    }

    cout << endl;

    int eliminar;
    cin >> eliminar;

    int nuevoNum[n];
    int nuevoTam = 0;

    for (int i = 0; i < n; i++){
        if (num[i] != eliminar){
            nuevoNum[nuevoTam] = num[i];
            nuevoTam ++;
        }
    }
    
    if (nuevoTam == n){
         cout << "El numero no se encontro en el arreglo."<< endl;
    } 

    else {
        cout << "Arreglo despues de eliminar " << eliminar << ": "<< endl;
        for (int i = 0; i < nuevoTam; i++) {
            cout << nuevoNum[i] << " ";
        }
    }

    return 0;
}