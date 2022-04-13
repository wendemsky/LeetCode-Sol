// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

// Complete this function
void reverseArray(int arr[], int n) {
    
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        reverseArray(arr, n);

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    return 0;
}  // } Driver Code Ends