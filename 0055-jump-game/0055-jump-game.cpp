class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0, min_dis = 0;

        for(i = nums.size()-2;i>=0;i--){
            min_dis++;
            if(nums[i]>=min_dis){
                min_dis = 0;
            }
        }
        
        if(min_dis == 0)
            return true;
        return false;

    }
};