class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i = 0, j = 0, k = 0;
        vector<vector<int>> sol;
        sort(nums.begin(), nums.end());
        for(i = 0; i<nums.size()-2; i++){
            if(i > 0 && nums[i] == nums[i - 1]){ 
                continue;
            }
            j = i+1;
            k = nums.size()-1;
            while(j<k){ 
                if((nums[i]+nums[j]+nums[k])==0){
                    sol.push_back({nums[i], nums[j], nums[k]});
                    int last_low_occurence = nums[j];
                    int last_high_occurence = nums[k];
                    while(j < k && nums[j] == last_low_occurence){
                        j++;
                    }
                    while(j < k && nums[k] == last_high_occurence){
                        k--;
                    }
                }
                else if((nums[i]+nums[j]+nums[k])>0){
                    k--;
                }
                else if((nums[i]+nums[j]+nums[k])<0)
                    j++;
            }
        }
        return sol;
    }
    
};