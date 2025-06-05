//Juego de Adivinanza con Intentos Limitados
//El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50.

#include <iostream> 
using namespace std;

int main(){

    int a = 37, numero, intento = 0, intentoMax = 5;

    cout <<"Advinanza! Ingrese un numero de el 1 al 50 para ver si adivina el numero secreto! (Tienes 5 intentos)"<< endl;
    cin >> numero;

    if (numero < 1 || numero > 50){
        cout <<"Error"<< endl;
        return 0;
    }
    
    while (intento < intentoMax){

        if (a == numero){
            cout <<"Adivinaste!!!"<< endl;
            return 0;
        }

        else {
            cout <<"Se ha equivocado, le quedan " << intentoMax - intento - 1 << " intentos"<< endl;
            cin >> numero;

            intento++;
        }

    
    }
    cout <<" "<< endl;
    cout <<"Te quedaste sin intentos!!"<< endl;
    return 0;
}