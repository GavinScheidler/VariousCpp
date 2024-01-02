#include <iostream>
#include <string>
#include <random>
using namespace std;



int main(){

    default_random_engine generator;
    uniform_int_distribution<int> distribution(1,6);
    int dice_roll = distribution(generator);

    bool contuine = true;

    while(contuine){
    int guess;

    cout<<"Rolling a dice.."<<endl;
    int dice_roll = distribution(generator);
    
    cout<<"Guess what I rolled: ";
    cin>>guess;
    if(guess == dice_roll)
        cout<<"YIPPEE!!!!"<<endl;
    else{
        cout<<"Uh oh.. Nuh uh.."<<endl;;
    }
    cout<<"Press 1 to keep playing! ";
    cin>>contuine;
    }

    return 0;
}