#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout<<"Welcome to the number guessing game"<<endl;
    cout<<"Try to guess the number between 1 and 100"<<endl;
    
    do {
        cout<<"Enter your guess :"<<endl;
        cin>>guess;
        attempts++;

        if(guess>secretNumber){
            cout<<"Too high! Try again"<<endl;

        } else if (guess<secretNumber){
            cout<<"Too low! Try again"<<endl;

        } else {
            cout<<"Congratulations! You guessed the number "<<endl;
        }

    } while(guess != secretNumber);
    return 0;
}