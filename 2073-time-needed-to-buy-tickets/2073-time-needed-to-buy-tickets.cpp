class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        
        while(true){
            for(int j = 0; j<tickets.size(); j++){
                if(tickets[j]>0){
                    tickets[j]--;
                    time++;
                }
                if(tickets[k]==0)
                    return time;          
            }
        }
        return time;
        
        
    }
};