#include <iostream>

using namespace std;

int main()
{

    int option, players, time, food, talk;

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "In sunday i will go to the park with my friends, what am i going to do? " << endl;
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "1. Play soccer" << endl;
    cout << "2. Go for a walk" << endl;
    cout << "3. Picnic" << endl;
    cout << "4. Talk with friends" << endl;
    cout << "5. Honestly, i dont want to do nothing" << endl;
    cin >> option;
    cout << "----------------------------------------------------------------------- " << endl;

    switch (option)
    {

    case 1:
        cout << "How many players?" << endl;
        cin >> players;

        if (players <= 0)
        {
            cout << "mmm i dont think you can play with that amount of players..." << endl;
        }

        else if (players >= 20)
        {
            cout << "I dont think you have more than 20 friends" << endl;
        }

        else
        {
            cout << "Have fun playing soccer!!" << endl;
        }

        break;

    case 2:
        cout << "How long are you going to take the walk?" << endl;
        cout << "1. One hour" << endl;
        cout << "2. Two hours" << endl;
        cout << "3. Three hours" << endl;
        cout << "4. Four to six hours" << endl;
        cin >> time;
        cout << "----------------------------------------------------------------------- " << endl;

        switch (time)
        {

        case 1:
            cout << "One hour its ok, you have more hours to do another thing" << endl;
            break;

        case 2:
            cout << "Two hours its still good, you can do something later" << endl;
            break;

        case 3:
            cout << "Ok, three hours its tired, but you can do it" << endl;
            break;

        case 4:
            cout << "OK, you are crazy... but its fine if you want to walk so much..." << endl;
            break;

        default:
            cout << "Error" << endl;
            break;
        }

        break;

    case 3:
        cout << "What food are you going to eat?" << endl;
        cout << "1. Pizza" << endl;
        cout << "2. Sandwich" << endl;
        cout << "3. Else" << endl;
        cin >> food;
        cout << "----------------------------------------------------------------------- " << endl;

        switch (food)
        {

        case 1:
            cout << "Wow pizza its a good election" << endl;
            break;

        case 2:
            cout << "Sandwich its meh, but ok" << endl;
            break;

        case 3:
            cout << "Enjoy your food" << endl;
            break;

        default:
            cout << "Error" << endl;
            break;
        }

        break;

    case 4:
        cout << "What do you want to talk with your friends" << endl;
        cout << "1. About love" << endl;
        cout << "2. About problems" << endl;
        cout << "3. About good memories" << endl;
        cin >> talk;
        cout << "----------------------------------------------------------------------- " << endl;

        switch (talk)
        {

        case 1:
            cout << "Amazing! Keep wasting your time!" << endl;
            break;

        case 2:
            cout << "Ok, its fine" << endl;
            break;

        case 3:
            cout << "Its beatiful when you talk about good times" << endl;
            break;

        default:
            cout << "Error" << endl;
        }

        break;

    case 5:
        cout << "Go to your house if you dont want to do anything" << endl;
        break;

    default:
        cout << "Error" << endl;
        break;
    }

    return 0;
}