#include <iostream>

using namespace std;

bool isprime(int n){
    for(int i =2 ; i<n ;i++){
        if(n %i ==0){
         return false; 
         break;  
        }
    }
    return true;
}


int main(){

int n;

cout<< "Enter the number:";
cin >> n;

if(isprime(n)){
    cout<< n<<" is a prime number:";
}else{
    cout<< n<<" is not a prime number";
}
}
