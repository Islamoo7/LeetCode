#include <iostream> 
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;

        int i=0;
        while(s[i]){
        
                if(s[i]==')' && s1.size()>0 && s1.top()=='('){
                    s1.pop();
                }
                else  if(s[i]=='}' && s1.size()>0 && s1.top()=='{'){
                    s1.pop();
                }
                else  if(s[i]==']' && s1.size()>0 && s1.top()=='['){
                    s1.pop();
                }
                else{
                    s1.push(s[i]);
                }
                i++;
        }
                

            if(s1.size()==0){
                return true;
            }
            return false;
       
    }
};


