class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string s = "";
        int i = 0;

        for(i = 0; i<strs[0].length(); i++){
            for(int j = 0; j<strs.size(); j++){
                if(strs[0][i]!=strs[j][i]){
                    i = strs[0].length();
                    break;
                }
            }
            if(i!=strs[0].length())
                s.push_back(strs[0][i]);

        }
        return s;
    }
};
