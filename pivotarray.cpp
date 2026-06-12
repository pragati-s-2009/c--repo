#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int s=0,e=size-1;
int mid;
    while(s<e){
        mid=s+(e-s)/2;
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return e;
}

int main(){
    int arr[6]={7,8,9,2,4,6};
    int size=6;
    cout<<"index of pivot array "<<pivot(arr,6);

}