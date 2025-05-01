// Pide un numero del 1 al 7 y imprime el numero de la semana 

#include <iostream>

using namespace std;

int main() {
    //Declare variable
    int number;

    // Ask for a number 1-7
    cout <<"Please instert a number from 1 to 7"<< endl; 
    cin >> number;

    // Use switch to have seven diferent cases
    switch (number){

        case 1:
        cout <<"Monday"<< endl;
        break;

        case 2:
        cout <<"Tuesday"<< endl;
        break;

        case 3:
        cout <<"Wednesday"<< endl;
        break;

        case 4:
        cout <<"Thursday"<< endl; 
        break;

        case 5:
        cout <<"Friday"<< endl;
        break; 

        case 6:
        cout <<"Saturday"<< endl;
        break;

        case 7:
        cout <<"Sunday"<< endl;
        break;

        default:
        cout <<"Error"<< endl;
    }

    return 0; 
}