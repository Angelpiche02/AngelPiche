//Validacion en el menu de la manana, anadir cajita feliz, 
//si estoy en un rango de 0-7 anos puedo comprar la caja, 
//si estoy de 7 a 14 anos, puedo comprarlo pero el precio x2, 
//si tengo 14 a 18, puedo comprarlo pero al triple de precio, 
//si estoy en 18 a 80 anos, no puedo comprarlo
//Si esta caro no lo puedo comprar

#include <iostream> 

using namespace std;

int main(){

    float wallet = 100, restante;
    int menuGlobal, menu1, menu2, menu3, edad;

    cout <<"Su billetera tiene $100"<< endl;

    cout <<"---------MAC MENU---------"<< endl;
    cout <<"1. Menu de mañana"<< endl;
    cout <<"2. Menu de la tarde"<< endl;
    cout <<"3. Menu de la noche"<< endl;
    cout <<"4. Salir"<< endl;
    cout <<"Que menu desea visualizar?"<< endl;
    cin >> menuGlobal;

    switch (menuGlobal){

        case 1: 
        cout <<"---Menu de manana---"<< endl;
        cout <<"1. Mc Muffin ($3)"<< endl;
        cout <<"2. Hotcakes ($4.75)"<< endl;
        cout <<"3. Jugo ($1.25)"<< endl;
        cout <<"4. Papas ($2)"<< endl;
        cout <<"5. Cajita feliz ($50)"<< endl;
        cout <<"Buenos dias, que le puedo ofrecer?"<< endl;
        cin >> menu1;

        switch (menu1){

            case 1: 
            cout <<"A seleccionado un McMuffin"<< endl;
            restante = wallet - 3;
            cout <<"Su saldo actual es de: "<< restante<< endl;
            break;

            case 2:
            cout <<"A seleccionado un Hotcakes"<< endl;
            restante = wallet - 4.75;
            cout <<"Su saldo actual es de: "<< restante<< endl;
            break;

            case 3: 
            cout <<"A seleccionado un jugo"<< endl;
            restante = wallet - 1.25;
            cout <<"Su saldo actual es de: "<< restante<< endl;
            break;

            case 4:
            cout <<"A seleccionado unas papas"<< endl;
            restante = wallet - 2;
            cout <<"Su saldo actual es de: "<< restante<< endl;
            break;

            case 5:
            cout <<"A seleccionado cajita feliz"<< endl;
            cout <<"Que edad tiene?"<< endl;
            cin >> edad;

            if (edad < 0 || edad > 80){
                cout <<"No puedes tener esa edad"<< endl;
            }

            else if (edad >= 0 && edad <= 7){
                cout <<"Su cajita feliz cuesta $50.00"<< endl;
                restante = wallet - 50;
                cout <<"Su saldo actual es de: "<< restante <<endl;
            }
            
            else if (edad > 7 && edad <= 14){
                cout <<"Su cajita feliz cuesta $100.00"<< endl;
                restante = wallet - 100;
                cout <<"Su saldo actual es de: "<< restante << endl;
            }
            else if (edad > 14 && edad <= 18){
                cout <<"Su cajita feliz cuesta $150.00"<< endl;
                cout <<"No lo puede comprar, no tiene suficiente dinero"<<endl;
            }
            else if (edad > 18 && edad <= 80){
                cout <<"No puede, ya estas ruco"<< endl;
            }
            else{}
            break;

        default:
        cout <<"Error"<< endl;
        return 0;
        break;  

        }
        break;

        case 2:
        cout <<"---Menu de tarde---"<< endl;
        cout <<"1. Big mac($5)"<< endl;
        cout <<"2. Cuarto de libra ($5)"<< endl;
        cout <<"3. Soda ($2)"<< endl;
        cout <<"4. Papas ($2)"<< endl;
        cout <<"Buenas tardes, que le puedo ofrecer?"<< endl;
        cin >> menu2;

        switch (menu2){

            case 1:
            cout <<"A seleccionado big mac"<< endl;
            restante = wallet - 5;
            cout <<"Su saldo actual es: "<<restante<< endl;
            break;

            case 2:
            cout <<"A seleccionado cuarto de libra"<< endl;
            restante = wallet - 5;
            cout <<"Su saldo actual es: "<<restante<< endl;
            break;

            case 3:
            cout <<"A seleccionado soda"<< endl;
            restante = wallet - 2;
            cout <<"Su saldo actual es: "<<restante<< endl;
            break;

            case 4:
            cout <<"A seleccionado papas"<< endl;
            restante = wallet - 2;
            cout <<"Su saldo actual es: "<< restante << endl;
            break;

            default:
            cout <<"Error"<< endl;
            return 0;
            break;
            }

        break;

        case 3:
        cout <<"---Menu de noche---"<< endl;
        cout <<"1. Big mac ($7)"<< endl;
        cout <<"2. Soda ($3)"<< endl;
        cout <<"Buenas noches, que le puedo ofrecer?"<< endl;
        cin >> menu3;

        switch(menu3){

            case 1: 
            cout <<"A seleccionado big mac"<< endl;
            restante = wallet - 5;
            cout <<"Su saldo actual es: "<<restante<< endl;
            break;

            case 2:
            cout <<"A seleccionado soda"<< endl;
            restante = wallet - 3;
            cout <<"Su saldo actual es: "<< restante << endl;
            break;

            default:
            cout <<"Error"<< endl;
            return 0;
            break;
        }

        break;

        case 4:
        cout <<"Muchas gracias, vuelva pronto"<< endl;
        return 0;
        break;

        default:
        cout <<"Error"<< endl;
        return 0;
        break;
    }



    return  0;
}