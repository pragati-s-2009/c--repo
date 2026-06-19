#include<iostream>
using namespace std;
// n is no of painter
// m is no of units
bool possible(int arr[],int n,int m,int mid){
    int painter=1;
    int sum=0;
    for(int i=0;i<m;i++){
        if(sum+arr[i]<=mid){
            sum=sum+arr[i];
        }
        else{
            painter++;
            if(painter>n){
                return false;
            }

        }
        

    }
return true;
}

int paint(int arr[],int n,int m){
    int s=0;
    int total=0;
    for(int i=0;i<m;i++){
        total=total+arr[i];
    }
    int e=total;
    int ans=-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(possible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;

        }
        else{
            s=mid+1;
        }

    }
    return ans;
}
int main(){
  int boards[] = {10, 20, 30, 40};
    int m = sizeof(boards) / sizeof(boards[0]); // Number of boards
    int n = 2; // Number of painters
    
    int minTime = paint(boards, n, m);
    
    cout << "The minimum time to paint all boards is: " << minTime << endl;
    
    return 0;
}