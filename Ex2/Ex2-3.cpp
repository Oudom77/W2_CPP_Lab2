#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

void countFrequency(string str);

int main (){

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++){

        str[i] = toupper(str[i]);

    }

    countFrequency(str);

    return 0;
}

void countFrequency(string str){

    int ascii[128] = {0};

    for (int i = 0; i < str.length(); i++){

        ascii[str[i]]++; 

    }

    for (int i = 0; i < 128; i++){

        if (ascii[i] != 0){

            char tmp = i;

            cout << endl << tmp << ": " << ascii[i];

        }
    }
}