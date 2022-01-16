class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
           stack<int> st;
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int, int> nge;
        
        nge[nums2[n2 - 1]] = -1;
        st.push(nums2[n2 - 1]);
        
        for (int i = n2 - 2; i >=0; i--) {
            while (st.size() > 0 && st.top() < nums2[i]) {
                st.pop();
                //cout << "hi";
            }
            if (st.size() != 0){
                nge[nums2[i]] = st.top();
                
            } else {
                nge[nums2[i]] = -1;
            }
            st.push(nums2[i]);
           
        }
        vector<int> ans;
       
        for (auto e : nge) {
            cout << e.first << " " << e.second << "\n";
        }
        for (int i = 0; i < n1; i++) {
            ans.push_back(nge[nums1[i]]);
           
        }
        
        return ans;
    }
};