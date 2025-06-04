//Sistema de Transporte Público
//Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) y muestra el costo estimado de un viaje.


#include <iostream> 
using namespace std;

int main (){

    int opcion, tiempo;

    cout <<"Seleccione un tipo de transporte: "<< endl;
    cout <<"---------------------------------------"<< endl;
    cout <<"1. Bus"<< endl;
    cout <<"2. Metro"<< endl;
    cout <<"3. Taxi"<< endl;
    cout <<"---------------------------------------"<< endl;
    cin >> opcion;

    switch (opcion){

        case 1:
        cout <<"---------------------------------------"<< endl;
        cout <<"Que tan largo sera su viaje?"<< endl;
        cout <<"1. Media hora o menos"<< endl;
        cout <<"2. Una o dos horas"<< endl;
        cout <<"3. Tres horas o mas"<< endl;
        cout <<"---------------------------------------"<< endl;
        cin >> tiempo;

        switch (tiempo){

            case 1:
            cout <<"El costo de su viaje en bus sera de $1.00"<< endl;
            break;

            case 2:
            cout <<"El costo de su viaje en bus sera de $4.00"<< endl;
            break;

            case 3:
            cout <<"El costo de su viaje en bus sera de $10.00"<< endl;
            break;

            default:
            cout <<"Error"<< endl;
            break;
        }

        break;        

        case 2:
        cout <<"---------------------------------------"<< endl;
        cout <<"Que tan largo sera su viaje?"<< endl;
        cout <<"1. Media hora o menos"<< endl;
        cout <<"2. Una o dos horas"<< endl;
        cout <<"3. Tres horas o mas"<< endl;
        cout <<"---------------------------------------"<< endl;
        cin >> tiempo;
        
        switch(tiempo){

            case 1:
            cout <<"El costo de su viaje en metro sera de $5.00"<< endl;
            break;

            case 2:
            cout <<"El costo de su viaje en metro sera de $10.00"<< endl;
            break;

            case 3:
            cout <<"El costo de su viaje en metro sera de $15.00"<< endl;
            break;

            default: 
            cout <<"Error"<< endl;
            break;
        }

        break;

        case 3:
        cout <<"---------------------------------------"<< endl;
        cout <<"Que tan largo sera su viaje?"<< endl;
        cout <<"1. Media hora o menos"<< endl;
        cout <<"2. Una o dos horas"<< endl;
        cout <<"3. Tres horas o mas"<< endl;
        cout <<"---------------------------------------"<< endl;
        cin >> tiempo;

        switch(tiempo){

            case 1:
            cout <<"El costo de su viaje en taxi sera de $2.00"<< endl;
            break;

            case 2:
            cout <<"El costo de su viaje en taxi sera de $4.00"<< endl;
            break;

            case 3:
            cout <<"El costo de su viaje en taxi sera de $8.00"<< endl;
            break;

            default:
            cout <<"Error"<< endl;
            break;
        }

        break;

        default:
        cout <<"Error"<< endl;
        break;

    }

    return 0;
}