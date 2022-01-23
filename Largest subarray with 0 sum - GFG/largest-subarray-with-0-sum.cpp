// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int, int> mp;

        int maxi = INT_MIN;

        int runningSum = 0;

        for (int i = 0; i < n; i++) {
            runningSum += A[i];
            if (runningSum == 0){
                maxi = i + 1;
            }
            //cout << runningSum << " ";
            if (mp.find(runningSum) != mp.end()) {
                int temp = i - mp[runningSum];
               // cout << mp[runningSum] << " ";
               //cout << i << " " <<  mp[runningSum] << " " << temp << "\n";
                maxi = max(temp, maxi);
            } else {
                 mp[runningSum] = i;
            }
        } 
        
        
        
        // for (auto a: mp) {
        //     cout << a.first << " " <<  a.second << "\n";
        // }
        
        return (maxi != INT_MIN ? maxi : 0);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends