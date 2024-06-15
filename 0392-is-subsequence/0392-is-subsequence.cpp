class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, k = 0;
        while(i<s.length() && k<t.length()){
            if(s[i]==t[k]){
                i++;
            }
            k++;
        }
        if(i==s.length())
            return true;
        else
            return false;

    }
};