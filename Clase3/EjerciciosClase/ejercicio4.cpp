//pide el puntaje de un jugadir (1-5 estrellas ) y muestra un mensaje acorde su desempeno

#include <iostream> 

using namespace std; 

int main (){

    //Declare variable
    int score;

    //Ask for your score
    cout <<"Insert your score (1-5 stars)"<< endl; 
    cin >> score;

    //Use switch to have diferent cases 
    switch (score){
        case 1:
        cout <<"Your score is really bad"<< endl;
        break;

        case 2:
        cout <<"Your score is bad"<< endl;
        break;

        case 3:
        cout <<"Your score is mid"<< endl;
        break;

        case 4:
        cout<<"Your score is good"<<endl;
        break;

        case 5:
        cout <<"Your score is really good"<< endl;
        break;

        default:
        cout <<"Error"<< endl;
        break;
    }
    

    return 0;
}