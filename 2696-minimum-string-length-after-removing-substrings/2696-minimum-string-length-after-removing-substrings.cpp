class Solution {
public:
    int minLength(string s) {
        string s1 = "";
        for(int i = 0; i<s.length(); i++){
            if(s1.length()>0 && ((s1.back()=='A' && s[i]=='B') || (s1.back()=='C' && s[i]=='D')))
                s1.pop_back();
            else
                s1.push_back(s[i]);
        }
        return s1.length();
    }
};