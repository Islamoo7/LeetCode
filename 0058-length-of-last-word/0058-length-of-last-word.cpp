class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenth = 0;
        int j = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i]==' ')
                j = 0;
            else{
                j++;
                lenth = j;
            }
        }
        return lenth;
    }
};