#include <iostream>
using namespace std;

int isPalindrome(int, int);
int main () {
    int firstNumber, secondNumber, check;
    cout << "Enter first word :" << endl;
    cin >> firstNumber;
    cout << "Enter second word :" << endl;
    cin >> secondNumber;
    cout << endl;
    if (firstNumber < 0 || secondNumber < 0){
        cout << "Invalid input" << endl;
        return 1;
    }
    check = isPalindrome(firstNumber, secondNumber);

    if (check)
        cout << "Given Numbers are palindrome" << endl;
    else
        cout << "Given Numbers are not palindrome" << endl;
}

int isPalindrome(int firsNumber, int secondNumber){
    int result = 0;
    while(firsNumber){
        result = result * 10 + (firsNumber % 10);
        firsNumber/=10;
    }

    if ( result == secondNumber)
        return 1;
    return 0;
}
