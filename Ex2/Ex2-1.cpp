#include <iostream>
#include <string.h>
#include <string>

using namespace std;

bool isPalindrome(string str){

    string temp = str;

    int len = str.length();

    for (int i = 0; i < len / 2; i++){

        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;

    }

    cout << "String Reversed: " << str;

    return temp == str;
}

int main (){

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    bool check = isPalindrome(str);

    if (check){

        cout << endl << "\"" << str << "\"" << " isn a palindrome";

    } else {

        cout << endl << "\"" << str << "\"" << " isn't a palindrome";

    }

    return 0;
}