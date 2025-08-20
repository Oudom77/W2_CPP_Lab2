#include<iostream>
using namespace std;
void bubblestore(int arr[],int size){
     for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[j],arr[i]);
            }
        }
     }
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
    int n;
    cout<<"How many elemetns: ";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Index "<<i<<" ";cin>>arr[i];
    }
    bubblestore(arr,n);
    return 0;
}