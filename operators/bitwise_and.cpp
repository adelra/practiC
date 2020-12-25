#include <iostream>
#include <string>
using namespace std;
int main()
{
    int firstDigit;
    int secondDigit;
    cout << "Enter the first digit? " << endl;
    cin >> firstDigit;
    cout << "Enter the second digit? "<< endl;
    cin >> secondDigit;
    if (firstDigit < secondDigit){

    cout << "First digit is smaller\n" <<firstDigit << secondDigit;
    } 
    else if (firstDigit > secondDigit){
    
    cout << "First digit is larger \n" <<firstDigit << secondDigit;
    }
    else if (firstDigit == secondDigit){
    
    cout << "Both are equal\n" <<firstDigit << secondDigit;
    }
    else{
    cout << "Other problems";
}
}
