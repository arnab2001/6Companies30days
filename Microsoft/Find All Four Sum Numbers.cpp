// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int>>ans;
       unordered_map<int,pair<int,int>>m;
       int n=arr.size();
       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               m[arr[i]+arr[j]]={i,j};
           }
       }
       for(int i=0;i<n-1;i++)
       {
           vector<int>v;
           for(int j=i+1;j<n;j++)
           {
               if(m.find(k-arr[i]+arr[j])!=m.end())
               {
                   pair<int,int>p=m[k-arr[i]+arr[j]];
                   if(p.first!=i &&p.second!=i &&p.first!=j &&p.second!=j)
                   {
                       v.push_back(arr[p.first]);
                       v.push_back(arr[p.second]);
                       v.push_back(arr[i]);
                       v.push_back(arr[j]);
                       sort(v.begin(),v.end());
                   }
                   ans.push_back(v);
               }
               
           }
       }
       return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
