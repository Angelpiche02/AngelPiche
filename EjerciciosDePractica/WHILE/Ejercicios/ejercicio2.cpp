//Verificación de Contraseña
//El usuario debe ingresar una contraseña. Si es incorrecta, debe volver a intentarlo hasta que la ingrese correctamente.

#include <iostream> 
using namespace std;

int main (){

    string contrasena, contrasena2;

    cout <<"Ingrese su contrasena: "<< endl;
    cin >> contrasena;

    cout <<"Ingrese nuevamente su contrasena para verificar"<< endl;
    cin >> contrasena2;

    while (contrasena != contrasena2)
    {
        if (contrasena == contrasena2){
        }

        else {
            cout <<"Su contrasena es incorrecta, intentelo de nuevo: ";
            cin >> contrasena2;
        }
    }
    
    cout <<"Contrasena correcta"<< endl;

    return 0;
}