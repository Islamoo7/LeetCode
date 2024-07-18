class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int k = height.size()-1;
        int max_vol = 0;
        while(i<k){
            max_vol = max(max_vol,(k-i)*min(height[k], height[i]));
            if(height[k] >= height[i])
                i++;
            else
                k--;
        }
        return max_vol;
    }
};