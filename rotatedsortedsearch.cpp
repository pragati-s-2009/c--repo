#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int s=0,e=size-1;
int mid;
    while(s<e){
        mid=s+(e-s)/2;
        if(arr[mid]>=arr[e]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return e;
}
int binarysearch(int arr[],int size,int s,int e,int target){
    
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
      
    }
    return -1;
}
int main(){
    int target=3;
    int arr[6]={7,8,1,2,3,4};
    int n=pivot(arr,6);
    if(arr[n]<target && arr[5]>target){
       
    return binarysearch(arr,6,n,5,3);
    }
    else{
        return binarysearch(arr,6,0,n-1,3);
    }
}
