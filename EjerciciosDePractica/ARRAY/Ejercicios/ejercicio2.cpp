//Invertir un Arreglo
//Llena un arreglo con N números e invierte el orden de los elementos.

#include <iostream>
using namespace std;

int main (){

    //Array
    int number [5] = {1,2,3,4,5}; 

    //Show the current array
    cout <<"Content of the array: "<< endl;

    for (int i = 0; i < 5; i++){

        cout <<"Array: "<< number[i]<< endl;
    }
cout <<"----------------------------------------"<< endl;

    cout <<"-----Inverted array------"<< endl;

    //Inicializar desde el final con la condicion de i >=0 para mostrar el array invertido
    for (int i = 4; i >= 0; i--){

        //Show the inverted array
        cout <<"Inverted array: "<< number [i]<< endl;
    }


    return 0;
}
