#include <iostream>
#include <cmath>

using namespace std;

void Menu(){
    cout << "-------------------------------------------------------" << endl;
    cout << "Rules of the game" << endl;
    cout << "-------------------------------------------------------" << endl;

    cout << "1. Choose any number between 1 and 10" << endl;
    cout << "2. If you win you will get 10 times of money you bet" << endl;
    cout << "3. If you bet on the wrong number you will loose your betting amount" << endl;
    cout << " " << endl;
}
void choices(){
    cout << "Do you want to play again y/n: ";
}


int main()
{   
    string name;
    int deposit,bet,guess,dice;
    char choice;
    cout << "CASINO GAME"<< endl;
    cout << "Enter your name: ";
    cin >> name;
    cout <<"Enter Deposit amount: $ ";
    cin >> deposit;
    do{
        Menu();
    cout << "Your current balance is: $ " << deposit << endl;
    
    do{
    cout << "Enter money you bet: $ ";
    cin >> bet;
    }while(bet>deposit);
    
    do{
    cout << "Guess the number between 1 and 10: ";
    cin >> guess;
    }while(guess > 10 || guess < 1);
    
    srand(time(0));
    dice = rand()%10+1;

   
    
    if (guess == dice){
        cout << "Good job that's correct!! You have: $ "<< dice*bet << endl;
        cout << "The winning number was: "<< dice << endl;
    }
    else{
        cout << "Bad luck this time. You lost $ "<< bet << endl;
        cout << "The winning number was: "<< dice << endl;
        deposit = deposit-bet;
    }
      
    cout << name << " You have: $ " << deposit << endl;

    if(deposit <= 0){
        cout << "Sorry you have no money! Come again next time!" << endl;
        break;
    }
    choices();
    cin >> choice;
    }while(choice == 'y');
    
    return 0;
} 



