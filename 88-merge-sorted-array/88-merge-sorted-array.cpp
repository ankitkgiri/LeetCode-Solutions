class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int ptr1 = 0;
        int ptr2 = 0;
        
        while (ptr1 < m && ptr2 < n) {
            if (nums1[ptr1] > nums2[ptr2]) {
                swap(nums1[ptr1], nums2[ptr2]);
                
                for (int i = 0; i < n - 1; i++) {
                    if (nums2[i] > nums2[i + 1]) {
                        swap(nums2[i], nums2[i + 1]);
                    }
                }
            }
            ptr1++;
        }
        
        for (int i = m; i < m + n; i++) {
            nums1[i] = nums2[i - m];
        }
        
    }
};