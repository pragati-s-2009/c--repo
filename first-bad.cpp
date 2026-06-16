#include<iostream>
using namespace std;

bool isBadVersion(int version, int actualBad) {
    if (version >= actualBad) {
        return true;
    }
    return false;
}

int main() {
    int n = 10;          // Total versions
    int actualBad = 6;   // Let's pretend 6 is the first bad one
    
    int s = 1;
    int e = n;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        // Calling the function to check if mid is bad
        if (isBadVersion(mid, actualBad)) {
            ans = mid;    // Found a bad one, save it!
            e = mid - 1;  // Go left to find an earlier one
        } 
        else {
            s = mid + 1;  // It was good, go right
        }
    }

    cout << "First Bad Version is: " << ans << endl;

    return 0;
}
