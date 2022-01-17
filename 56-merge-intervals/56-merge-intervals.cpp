class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n= intervals.size();
        stack<vector<int>> st;
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        
        for (int i = 0; i < n; i++) {
            cout << intervals[i][0] <<  " "  << intervals[i][1] << " \n";
        }
        
        st.push(intervals[0]);
            
        int i = 1;
        while(i < n) {
            vector<int> t = st.top();
            if (t[1] < intervals[i][1]){
                 if (t[1] >= intervals[i][0]) {
                    st.pop();
                    t[1] = intervals[i][1];

                    st.push(t);
                } else {
                    st.push(intervals[i]);
                }
            }
           
            
            i++;
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};