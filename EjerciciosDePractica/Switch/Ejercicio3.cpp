//Escriba un programa, en el que el usuario ingrese una letra y elprograma diga el color 

#include <iostream>
using namespace std;

int main(){

    char letra;
    cout <<"Ingrese una letra (R,Y,B,W,K,C,G) para ver que color es: ";
    cin >> letra;

    if (letra >= 'a' && letra <= 'z'){
        letra = letra - 'a' + 'A';
    }

        switch (letra){
            case 'R':
            cout <<"Rojo"<< endl;
            break;

            case 'Y':
            cout <<"Amarillo"<< endl;
            break;

            case 'B':
            cout <<"Azul"<< endl;
            break;

            case 'W':
            cout <<"Blanco"<< endl;
            break;

            case 'K':
            cout <<"Negro"<< endl;
            break;

            case 'C':
            cout <<"Cian"<< endl;
            break;

            case 'G':
            cout <<"Verde"<< endl;
            break;

            default:
            cout <<"Error"<< endl;
            break;

    }

    return 0;
}
