//Días en un Mes
//Pide el número de un mes y muestra cuántos días tiene.

#include <iostream>
using namespace std;

int main(){

    int dias, mes;

    cout <<"Escriba el numero de un mes para ver sus dias"<< endl;
    cin >> mes;

    switch (mes){

        case 1:
        cout <<"Enero, 30 dias"<< endl;
        break;

        case 2:
        cout <<"Febrero, 28 dias"<< endl;
        break;

        case 3:
        cout <<"Marzo, 31 dias"<< endl;
        break;

        case 4:
        cout <<"Abril, 30 dias"<< endl;
        break;

        case 5:
        cout <<"Mayo, 31 dias"<< endl;
        break;

        case 6:
        cout <<"Junio, 30 dias"<< endl;
        break;

        case 7:
        cout <<"Julio, 30 dias"<< endl;
        break;

        case 8:
        cout <<"Agosto, 31 dias"<< endl;
        break;

        case 9:
        cout <<"Septiembre, 30 dias"<< endl;
        break;

        case 10:
        cout <<"Octubre, 31 dias"<< endl;
        break;

        case 11:
        cout <<"Noviembre, 30 dias"<< endl;
        break;

        case 12:
        cout <<"Diciembre, 31 dias"<< endl;
        break;

        default:
        cout <<"Error"<< endl;
        break;
    }


    return 0;
}