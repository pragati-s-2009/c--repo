#include <iostream>
using namespace std;
int firstocc(int arr[],int size,int target){
   int s=0,e=size-1;
    int ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
    if(arr[mid]==target){
         ans=mid;
         e=mid-1;
        
         

    }
    else if(arr[mid]>target){
        e=mid-1;
    }
    else if(arr[mid]<target){
        s=mid+1;
    }

}
return ans;
}
int lastocc(int arr[],int size,int target){
     int s=0,e=size-1;
    int ans=0;
while(s<=e){
        int mid=s+(e-s)/2;
    if(arr[mid]==target){
         ans=mid;
         s=mid+1;

    }
    else if(arr[mid]>target){
        e=mid-1;
    }
    else if(arr[mid]<target){
        s=mid+1;
    }
}
return ans;
}
int main(){
    int arr[6]={2,2,3,5,5,5};
    
    
    cout<<"first occ is at index  "<<firstocc(arr,6,5);
    cout<<"last occ is at index  "<<lastocc(arr,6,5);
    
}