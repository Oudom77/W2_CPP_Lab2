#include <iostream>
using namespace std;

long long factorial(int n){
    int factorial=1;
        for(int i =1 ; i<=n ;i++){
        factorial=factorial*i;
    } 
    return factorial;   
}
int main(){
int n;

cout <<"Enter the number:";
cin>>n;
cout<<"Factorial of "<<n << " is:"<< factorial(n);

}
