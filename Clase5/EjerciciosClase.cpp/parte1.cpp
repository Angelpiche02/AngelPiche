#include <iostream> 
using namespace std;

int main(){
    int grade;
    char letter;

    cout <<"Insert your grade: ";
    cin >> grade;
    
    if (grade < 0 || grade > 100){
        cout<<"Error"<< endl;
        return 1;
    }
    if (grade >= 90){
        letter = 'A';
        cout <<"A"<< endl;
    } 
    else if (grade < 90 && grade >= 85){
        letter = 'B';
        cout <<"B"<< endl;
    }
    else if (grade < 85 && grade >= 80){
        letter = 'C';
        cout <<"C"<< endl;
    }
    else if (grade < 80 && grade >= 70){
        letter = 'D';
        cout <<"D"<< endl;
    }
    else if (grade < 70 && grade >= 69){
        letter = 'E';
        cout <<"E"<< endl;
    }
    else if (grade < 69){
        letter = 'F';
        cout <<"F"<< endl;
    }
    else{}

    switch (letter){

        case 'A':
        cout <<"Perfect grade, congratulations!"<< endl;
        break;

        case 'B':
        cout <<"Excelent grade!"<< endl;
        break;

        case 'C':
        cout <<"Good grade, proud of you!"<< endl;
        break;

        case 'D':
        cout <<"Nice grade, but it can be better"<< endl;
        break;

        case 'E':
        cout <<"You need to improve, but its ok!"<< endl;
        break;

        case 'F':
        cout <<"You need to study more"<< endl;
        break;



    }

    return 0;
}