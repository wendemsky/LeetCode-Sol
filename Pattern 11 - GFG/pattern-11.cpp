//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int t;
        for(int i=0;i<n;i++){
            if(i%2==0){
                t=1;
                for(int j=0;j<=i;j++){
                    cout<<t<<" ";
                    if(t==0) t=1;
                    else t=0;
                }
                cout<<endl;
            }else{
                t=0;
                for(int j=0;j<=i;j++){
                    cout<<t<<" ";
                    if(t==0) t=1;
                    else t=0;
                }
                cout<<endl;
            }
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