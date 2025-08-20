#include<iostream>
using namespace std;

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int size;

    cout<<"Enter number of element: ";
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++){
        cout <<"Enter the number: ";
        cin >> arr[i];
    }
    int max = findMax(arr, size);
    cout <<"The maximun value is: " <<max<< endl;

    return 0;
}