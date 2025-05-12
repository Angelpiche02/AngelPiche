#include <iostream> 
using namespace std; 

int main (){

    int opcion;
    double num1,num2, resultado;

    cout <<"-----CALCULADORA-----"<< endl;
    cout <<"Ingrese el primer numero"<< endl;
    cin >> num1;
    cout <<"Ingrese el segundo numero"<< endl;
    cin >> num2;
    cout <<"-------------------------"<< endl;

    cout <<"-----MENU-----"<< endl;
    cout <<"1.Suma"<< endl;
    cout <<"2.Resta"<< endl;
    cout <<"3.Multiplicacion"<< endl;
    cout <<"4.Division"<< endl;
    cout <<"5.Salir"<< endl;
    cout <<"--------------"<< endl;
    cin >> opcion;
    

    switch (opcion){

        case 1:
        resultado = num1 + num2;
        cout <<"La suma de los dos numeros es: "<< resultado<< endl;\
        break;

        case 2:
        resultado = num1 - num2;
        cout <<"La resta de los dos numeros es: "<< resultado<< endl;
        break;

        case 3:
        resultado = num1 * num2;
        cout <<"La multiplicacion de los dos numeros es: "<< resultado << endl;
        break;

        case 4:
        if (num2 != 0){
            resultado = num1 / num2;
            cout <<"La division de los dos numeros es: "<< resultado << endl;
        }
        else{
            cout <<"El numero 2 es cero, no se puede realizar la division"<< endl;
            return 1;
        } 
        break;

        case 5: 
        cout <<"Saliendo del programa"<< endl;
        return 0;
        break;

        default:
        cout <<"Error"<< endl;
        return 0;
    }

    cout <<"---------------------"<< endl;
    if (resultado > 0){
        cout <<"El resultado es positivo"<< endl;
    }

    else if (resultado < 0){
        cout <<"El resultado es negativo"<< endl;
    }

    else {
        cout <<"El resultado es 0"<< endl;
    }

    return 0;
}