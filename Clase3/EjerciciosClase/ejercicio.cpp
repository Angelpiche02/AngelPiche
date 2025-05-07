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

        case 4: // División
        // Verificar si el segundo número es cero antes de realizar la división
        if (num2 != 0)
        {
            resultado = num1 / num2;
            cout << "El resultado de la división es: " << resultado << endl;
        }
        else
        {
            cout << "Error: División por cero no permitida." << endl;
            return 1; // Salida temprana del programa si se intenta dividir por cero
        }
        break;
    case 5: // Salir
        cout << "Saliendo del programa. ¡Hasta luego!" << endl;
        return 0;
        break;
    default:
        cout << "Opción no válida. Por favor, elija una opción del 1 al 5." << endl;
        return 1; // Salida temprana del programa si la opción no es válida
    }

     // Usar if-else para verificar si el resultado es positivo, negativo o cero
     if (resultado > 0) {
        cout << "El resultado es positivo." << endl;
    } else if (resultado < 0) {
        cout << "El resultado es negativo." << endl;
    } else {
        cout << "El resultado es cero." << endl;
    }

    return 0;
}