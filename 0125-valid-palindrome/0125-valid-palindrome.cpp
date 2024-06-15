class Solution {
public:
    bool isPalindrome(string s) {
        int k = 0;
        int i = 0;
        for(i = 0; i<s.length(); i++){
            if((48<=s[i] && s[i]<=57) || (97<=s[i] && s[i]<=122) || (65<=s[i] && s[i]<=90)){
                if((65<=s[i] && s[i]<=90)){
                    s[k] = ((char)(s[i]+32));
                    k++;
                }
                else{
                    s[k] = (s[i]);
                    k++;
                }
            }
        }
    
        for(i = 0; i<floor((k)/2); i++){
            if(s[i]!=s[k-1-i]){
                break;
            }
        }
        if(i==floor(k/2))
            return 1;
        else
            return 0;
    }
};