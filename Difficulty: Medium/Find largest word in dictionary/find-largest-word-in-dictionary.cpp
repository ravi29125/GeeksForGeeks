//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
    bool help(string s,string p){
        int n=s.size();int m=p.size();
        int j=0;
        for(int i=0;i<n&&j<m;i++){
            if(s[i]==p[j]){
                j++;
            }
        }
        return j==m;
    }
  public:
    string findLongestWord(string S, vector<string> d) {
        // code here
        string ans="";
        for(string i:d){
            if(i.size()>=ans.size() && help(S,i)){
                if(i.size()==ans.size()){
                    if(i<ans)
                    ans=i;
                }else ans=i;
            }
        }return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> d(n + 1);
        for (int i = 0; i < n; i++)
            cin >> d[i];
        string S;
        cin >> S;
        Solution ob;
        cout << ob.findLongestWord(S, d) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends