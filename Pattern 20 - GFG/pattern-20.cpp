//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int isiS = 2*n - 2;
        for(int i=1;i<=2*n-1;i++){
            int stars = i;
            if(i>n) stars = 2*n-i;
            //star
            for(int j=1;j<=stars;j++){
                cout<<"*";
            }
            //space
            for(int j=1;j<=isiS;j++){
                cout<<" "; 
            }
            
            //star
            for(int j=1;j<=stars;j++){
                cout<<"*";
            }
            
            cout<<endl;
            if(i<n) isiS-=2;
            else isiS+=2;
            
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends