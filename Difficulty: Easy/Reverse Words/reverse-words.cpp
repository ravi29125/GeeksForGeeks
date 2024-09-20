//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        string r="";
        vector<string> a;
        for(auto i:str){
            if(i=='.'){
                a.push_back(r);
                r="";
            }else{
                r+=i;
            }
        }
        if(r.size()!=0)a.push_back(r);
        int n=a.size();
        r=a[n-1];
        for(int i=n-2;i>-1;i--){
            r+=".";
            r+=a[i];
        }return r;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends