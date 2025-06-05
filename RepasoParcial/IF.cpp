//Tarifa de Luz Eléctrica
//Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.

#include <iostream>
using namespace std;

int main (){

    double tarifa;

    cout <<"Ingrese su tarifa: ";
    cin >> tarifa;

    if (tarifa < 100){

        cout <<"Tarifa baja"<< endl;
    }
    else if (tarifa >= 100 && tarifa <= 200){

        cout <<"Tarifa media"<< endl;
    }
    else if (tarifa > 200){

        cout <<"Tarifa alta"<< endl;
    }


    return 0;
}