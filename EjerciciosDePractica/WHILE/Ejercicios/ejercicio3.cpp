//Juego de Adivinanza con Intentos Limitados
//El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50.

#include <iostream>
using namespace std;

int main(){

    int intentos = 1, intentosMax = 5, num;
    int numero = 32;

    cout <<"ADIVINANZA! Escriba un numero del 1 al 50 para ver si le atina! Tiene 5 intentos"<< endl;
    cin >> num;

    if(num < 1 || num > 50){
        cout <<"Error"<< endl;
        return 0;
    }

    while (intentos < intentosMax){

        if(num == numero){
            cout <<"Has adivinado!!"<< endl;
            return 0;
        }
        else{
        cout <<"Intentalo de nuevo, te quedan "<< intentosMax - intentos <<" intentos" <<endl;
        cin >> num;
        intentos ++;
        }
            
    }
         
    cout <<"Perdiste"<< endl;
    return 0;
}