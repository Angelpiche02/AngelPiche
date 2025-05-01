#include <iostream>

using namespace std; 

int main (){
    //Declaracion de variables para almacenar numeros y resultados
    float num1, num2, resultado;
    int opcion;

    // Solicita al usuario que ingrese 2 numeros 
    cout << "Ingrese el primer numero"<< endl;
    cin >> num1;
    cout <<"Ingrese el segundo numero"<< endl;
    cin >> num2;

    //Mostrar el menu de opciones para elegir la operacion matematica

    cout <<"Seleccione una operacion:"<< endl;
    cout <<"1. Suma"<< endl;
    cout <<"2. Resta"<< endl;
    cout <<"3. Multiplicacion"<< endl; 
    cout <<"4. Division"<< endl;
    cin >> opcion;

    //Usar switch para realizar la operacion matematica segun la eleccion del usuario

    switch (opcion){

        case 1: 
        resultado = num1 + num2;
        cout <<"Su resultado es: "<< resultado << endl;
        break;

        case 2: 
        resultado = num1 - num2;
        cout <<"Su resultado es: "<< resultado << endl;
        break;

        case 3:
        resultado = num1 * num2;
        cout <<"Su resultado es: "<< resultado << endl;
        break;

        case 4:
        // Verificar si el segundo numero es cero antes de realizar la operacion 
        if (num2 != 0){
        resultado = num1 / num2;\
        cout << "Su resultado es: "<< resultado << endl;
        }

        else{
            cout <<"Error, you can not divide by 0"<< endl;
        }





    }


    return 0;
}