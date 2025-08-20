#include <iostream>
#include <string.h>
#include <ctype.h>
#include <string>


using namespace std;

int countWords(string str);

int main (){

    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    
    int count = countWords(str);

    cout << "The number of words: " << count;

    return 0;
}

int countWords(string str){

    int count = 0;

    for (int i = 0; i < str.length(); i++){

        if (i == 0 || str[i - 1] == ' '){

            count++;

        }
    }

    return count;
}