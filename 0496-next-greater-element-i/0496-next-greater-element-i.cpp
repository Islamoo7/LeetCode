class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;
        int i,j;
        for(i = 0;i<nums1.size();i++){
            auto it = find(nums2.begin(), nums2.end(),nums1[i]);
            j = it - nums2.begin();
            for(;j<nums2.size();j++){
                if(nums2[j]>nums1[i])
                    break;
            }
            if(j<nums2.size())
                sol.push_back(nums2[j]);
            else
                sol.push_back(-1);
        }
        return sol;
    }
};