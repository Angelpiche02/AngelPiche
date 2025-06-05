//Juego de Adivinanza con Intentos Limitados
//El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50.

#include <iostream> 
using namespace std;

int main(){

    int a = 37, numero, intentos = 0, intentosMax = 5;
    
    while (intentos < intentosMax){
    cout <<"Ingrese un numero para ver si es el correcto!!"<< endl;
    cin >> numero;

    if (numero == a){
        cout<<"Has adivinado!!"<< endl;
        return 0;
    }

    else{

        cout <<"Incorrecto, tiene "<< (intentosMax - intentos - 1) << " intentos" << endl;
    }

    intentos++;

    }

    cout <<" "<< endl;
    cout <<"Se te acabaron los intentos:("<< endl;
    
    return 0;
}