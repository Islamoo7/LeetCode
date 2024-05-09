#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string s1 = "";
        for(int i = 0; i<s.length(); i++){
            if(s1.length()>0 && s[i]==s1[s1.length()-1]){
                s1.pop_back();
                continue;
            }
            s1.push_back(s[i]);
            
        }
        return s1;
    }
};