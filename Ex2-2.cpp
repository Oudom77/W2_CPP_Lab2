#include <iostream>
#include <string.h>

using namespace std;

string reversedString(string str);

int main (){

    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Reversed string: " << reversedString(str);

    return 0;
}

string reversedString(string str){

    int len = str.length();

    for (int i = 0; i < len / 2; i++){

        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;

    }

    return str;

}