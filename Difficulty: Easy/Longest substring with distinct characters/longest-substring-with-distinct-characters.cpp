//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    const int MAX_CHAR = 26;
  public:
    int longestUniqueSubstr(string &s) {
        int n = s.size();
        int res = 0;
    
        // last index of all characters is initialized as -1
        vector<int> lastIndex(MAX_CHAR, -1);
    
        // Initialize start of current window
        int start = 0;
    
        // Move end of current window
        for (int end = 0; end < n; end++) {
    
            // Find the last index of s[end]
            // Update starting index of current window as
            // maximum of current value of end and last index + 1
            start = max(start, lastIndex[s[end] - 'a'] + 1);
    
            // Update result if we get a larger window
            res = max(res, end - start + 1);
    
            // Update last index of s[end]
            lastIndex[s[end] - 'a'] = end;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends