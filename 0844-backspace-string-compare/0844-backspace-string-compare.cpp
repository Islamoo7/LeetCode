#include <iostream> 
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> s1;
        stack <char> t1;
        int i = 0;
        for(i = 0; i<s.size(); i++){
            if(s[i]=='#' && s1.size()>0)
                s1.pop();
            else if(s[i]=='#' && s1.size()==0)
                continue;
            else
                s1.push(s[i]);
            
        }
        for(i = 0; i<(t.size()); i++){
            if(t[i]=='#' && t1.size()>0)
                t1.pop();
            else if(t[i]=='#' && t1.size()==0)
                continue;
            else
                t1.push(t[i]);
            
        }
        return s1==t1;
    }
        
        
    
};