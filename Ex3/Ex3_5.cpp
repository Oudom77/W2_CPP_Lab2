#include<iostream>
using namespace std;
void searchvalue(int arr[],int size,int search){
    bool check=false;
    for(int i=0;i<size;i++){
        if(search==arr[i]){
            check=true;
            break;
        }
    }
    if(check==true){
        cout<<search<<"is have";
    }else{
         cout<<search<<"not have";
    }

}
int main(){
    int n,search;
    cout<<"How many element:";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"index "<<i<<"=";cin>>arr[i];
    }
    cout<<"What value you want to search?=";cin>>search;
    searchvalue(arr,n,search);
    return 0;

}