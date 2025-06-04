//Asignación de Grupos en una Universidad
//Pide la inicial del apellido de un estudiante y usa switch para asignarlo a un grupo (A-M = Grupo 1, N-Z = Grupo 2).

#include <iostream> 
using namespace std;

int main (){

    int letra;

    cout <<"Seleccione donde pertenece su letra inicial de apellido para asignarle un grupo"<< endl;
    cout <<"1. (A-M)"<< endl;
    cout <<"2. (N-Z)"<< endl;
    cout <<"-------------------------------------------------------------------------------"<< endl;
    cin >> letra;

    switch(letra){

    case 1:
        cout <<"Su grupo es el 1"<< endl;
    break;

    case 2:
        cout <<"Su grupo es el 2"<< endl;
    break;

    default:
    cout <<"Error"<< endl;
    
    }    

    return 0;
}