//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        int j=0,n=arr.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            if(i<k){
                mp[arr[i]]++;
                s.insert(arr[i]);
            }else{
                mp[arr[i]]++;
                s.insert(arr[i]);
                if(mp[arr[j]]==1){
                    s.erase(arr[j]);
                }
                mp[arr[j]]--;
                j++;
            }
            if((i-j+1) == k)ans.push_back(s.size());
        }return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends