#include<iostream>
using namespace std;
void inputarray(int arr[],int size){
   

    for(int i=0;i<size;i++){
        cout<<"enter element for index:"<<i<<" ";
        cin>>arr[i];
    }

}
int main(){
    int arr[6];
    int size=6;
    int s=0;
    int e=size-1;
   inputarray(arr,6);
    int target;
cout<<"enter target";
    cin>>target;
    
    
    
    while(s<=e){
         int mid=s+(e-s)/2;

        if(arr[mid]==target){
            cout<<"found at positon "<<mid;
            return 0;
        }
        else if(arr[mid]>target){
        e=mid-1;
        
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            cout<<"not found";
        }
    }
    
}