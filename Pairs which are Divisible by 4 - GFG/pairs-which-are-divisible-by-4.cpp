// { Driver Code Starts
// C++ Program to count pairs whose sum divisible
// by '4'
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int count4Divisibiles(int arr[], int n)
    {   
        unordered_map<int, int> map;
        
        for (int i = 0; i < n; i++) {
            
            map[arr[i]%4]++;
        }
        
        int ans = map[0]*(map[0] - 1)/2 + map[2]*(map[2] - 1)/2 + map[1]*map[3];
        
        return ans;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
         cin>>arr[i];
        Solution ob;
        cout << ob.count4Divisibiles(arr, n)<<endl;
    }
 
    return 0;
}  // } Driver Code Ends