#include <iostream>
using namespace std;
//n is the no of students
// m is the no of pages
bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum=pageSum + arr[i];
        }
        else {
            studentCount=studentCount+1;

            if(studentCount > m || arr[i] > mid) {
                return false;
            }

            pageSum = arr[i];//pagesum=arr[i]+pagesum
        }
    }

    return true;
}

int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;

    while(s <= e) {
        int mid = s + (e - s) / 2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {50, 20,70, 30, 40};
    int n = 5;
    int m = 2;

    cout << allocateBooks(arr, n, m);
}