//Búsqueda de un Número
//Pide N números, guárdalos en un arreglo y busca si un número dado por el usuario está en él.

#include <iostream>

using namespace std;

int main(){

    //Declare variables
    int number [10] = {2,4,6,8,10,12,14,16,18,20}; //Arreglo
    int n;
    bool found = false; //Se declara como falsa pq aun no se sabe si el numero estara en el arreglo

    //Ask for a number
    cout <<"Insert a number: ";
    cin >> n;

    //Recorrer el arreglo 
    for (int i = 0; i < 10; i++){

        cout <<"Number "<< (i + 1) << ": " << number [i] << endl;

        //Condition
        if (n == number[i]){
            found = true;
        }
    } 

    //Condition to see if the number is on the list or not 
    if (found){
        cout <<"The number "<<n<<" is on the list"<< endl;
    }
    else {
        cout <<"The number "<<n<<" is not on the list"<< endl;
    }
    

    return 0;
}