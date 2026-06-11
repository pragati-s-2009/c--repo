#include<iostream>
using namespace std;
int peakelement(int arr[],int size){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
    else{
        e=mid;
    }
      mid=s+(e-s)/2;
    }
    return mid;
}
int main(){

    int arr[5]={0,1,2,3,1};
    cout<<peakelement(arr,5);
    return 0;
}