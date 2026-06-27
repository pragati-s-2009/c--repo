#include<iostream>
using namespace std;
void bubble(int arr[],int n){
    for(int i=1;i<n;i++){
        //rounds
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
        int arr[5]={90,33,23,34,45};
        int n=5;
        bubble(arr,5);
        cout<<"sorted array: ";
         for(int i=0;i<n;i++){
            cout<<arr[i];
            cout<<" ";  };
    
       return 0;
    }
