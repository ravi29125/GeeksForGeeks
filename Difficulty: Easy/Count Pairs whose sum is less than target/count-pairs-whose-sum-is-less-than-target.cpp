//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int ans=0;
        unordered_map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        vector<int> nums;
        for(auto k:mp)nums.push_back(k.first);
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum>=target){
                j--;
            }else{
                int k=j;
                while(k>i)ans+=mp[nums[i]]*mp[nums[k--]];
                i++;
            }
        }
        for(auto k:mp){
            int key=k.first,val=k.second;
            if(key+key < target){
                ans+=val*(val-1)/2;
            }
        }
        return ans;
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
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends