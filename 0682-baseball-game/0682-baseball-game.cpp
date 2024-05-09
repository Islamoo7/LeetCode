#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0, value1, value2;
        stack<int>s1;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="+"){
                value1 = s1.top();
                s1.pop();
                value2 = s1.top();
                s1.push(value1);
                s1.push(value1+value2);
            }
            else if(operations[i]=="D"){
                s1.push(2*s1.top());
            }
            else if(operations[i]=="C"){
                s1.pop();
            }
            else{
                s1.push(stoi(operations[i]));
            }
        }
        while(!s1.empty()){
            sum += s1.top();
            s1.pop();
        }
        return sum;
    }
};