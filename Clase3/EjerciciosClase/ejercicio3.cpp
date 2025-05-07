//  Pide una opcion 1 = usd a euro, 2 = usd a jpy, 3 = usd a gbp y realice la operacion

#include <iostream>

using namespace std;

int main(){

    //Declare variables 
    float usd, euro = 0.88 , jpy = 142.94, gbp = 0.75;
    float resultado;
    int option;

    //Request for usd aand options
    cout <<"Enter usd"<< endl; 
    cin >> usd;

    cout << "Instert option 1 (usd a euro), option 2 (usd a jpy), option 3 (usd a gbp)"<< endl;
    cin >> option;

    //Use switch to have diferent cases of answer 
    switch (option){
        case 1:
        resultado = (usd * euro);
        cout <<"The result is: "<< resultado << endl;
        break;

        case 2:
        resultado = (usd * jpy );
        cout <<"The result is: "<< resultado << endl;
        break;

        case 3:
        resultado = (usd * gbp);
        cout <<"The result is: "<< resultado<< endl;
        break;

        default:
        cout <<"Error"<< endl;
    }


    return 0;
}