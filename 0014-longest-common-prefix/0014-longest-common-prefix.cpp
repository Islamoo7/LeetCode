class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int minL = INT_MAX;
        int i = 0;
        bool flag = 0;
        for(i = 0; i<strs.size(); i++){
            if(strs[i].length()<minL){
                minL = strs[i].length();
            }
        }
        for(i = 0; i<minL; i++){
            for(int j = 0; j<strs.size(); j++){
                if(strs[0][i]!=strs[j][i]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                break;
            }
            else
                s.push_back(strs[0][i]);

        }
        return s;
    }
};