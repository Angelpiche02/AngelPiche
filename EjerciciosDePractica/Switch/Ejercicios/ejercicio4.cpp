/*Grado mayor o igual a 90 A
Menor de 90 pero mayor o igual a 85 B
Menor de 85 pero mayor o igual a 80 C
Menor de 80 pero mayor o igual a 70 D
Menor de 70 pero mayor o igual a 69 E
Menor de 69 F */

#include <iostream> 
using namespace std;

int main(){

    char letra;
    int nota;

    cout <<"Ingrese su nota: ";
    cin >> nota; 
    
    if (nota > 100 || nota < 0) {
        cout <<"Error"<< endl;
        return 0;
    }
    else if (nota >= 90){
        letra = 'A';
        cout <<"Su nota es A"<< endl;
    }
    else if (nota < 90 && nota >= 85){
        letra = 'B';
         cout <<"Su nota es B"<< endl;
    }
    else if (nota <85 && nota >= 80){
        letra = 'C';
         cout <<"Su nota es C"<< endl;
    }
    else if (nota < 80 && nota >= 70){
        letra = 'D';
         cout <<"Su nota es D"<< endl;
    }
    else if (nota < 70 && nota >= 69){
        letra = 'E';
         cout <<"Su nota es E"<< endl;
    }
    else if (nota < 69){
        letra = 'F';
         cout <<"Su nota es F"<< endl;
    }

    switch (letra){

        case 'A':
        cout <<"Felicidades, increible nota"<< endl;
        break;

        case 'B':
        cout <<"Felicidades, buena nota"<< endl;
        break;

        case 'C':
        cout <<"Buena nota!!"<< endl;
        break;

        case 'D':
        cout <<"Buena nota, pero puede mejorar!"<< endl;
        break;

        case 'E':
        cout <<"Nota normal"<< endl;
        break;

        case 'F':
        cout <<"Tiene que mejorar"<< endl;
        break;

        default:
        cout <<"Error"<< endl;
        break;
    }



    return 0;
}