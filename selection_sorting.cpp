#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int a=i;
        for(int j=i+1;j<n;j++){
            if(arr[a]>arr[j]){
                a=j;
            }

        }
        swap(arr[a],arr[i]);
    }
}
int main() {
    
    int n = 5; 
    int arr[5] = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

   
    sort(arr, n);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
    }
