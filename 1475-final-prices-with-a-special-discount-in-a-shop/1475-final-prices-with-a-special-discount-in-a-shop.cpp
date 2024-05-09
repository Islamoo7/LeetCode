#include <iostream> 
#include <vector> 
  
using namespace std; 

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        
        int i,j;
        for(i = 0; i < prices.size()-1; i++){
            for(j=i+1; j < prices.size()-1; j++){
                if(prices[j] <= prices[i]){
                    break;
                }
            }
            if(prices[j]<=prices[i]){
                answer.push_back(prices[i]-prices[j]);
            }
                
            else
                answer.push_back(prices[i]);
        }
        answer.push_back(prices[i]);
        return answer;
    }
};