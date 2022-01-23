// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    vector<int> subsum;
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        generate(arr, 0, 0);
        sort(subsum.begin(), subsum.end());
        return subsum;
    }
    
    void generate(vector<int> arr, int i, int sum) {
        
        if (i >= arr.size()) {
            subsum.push_back(sum);
            return;
        }
        
        generate(arr, i + 1, sum);
        generate(arr, i + 1, sum + arr[i]);
        
    }
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends