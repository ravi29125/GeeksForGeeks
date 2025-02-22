//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int> s;
        for(int i:arr){
            if(s.empty()){
                s.push(i);
            }else if((i<0 && s.top()<0)||(i>=0 && s.top()>=0)){
                s.push(i);
            }else{
                s.pop();
            }
        }
        vector<int> ans(s.size());
        int n=s.size();
        while(n--){
            ans[n]=s.top();
            s.pop();
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends