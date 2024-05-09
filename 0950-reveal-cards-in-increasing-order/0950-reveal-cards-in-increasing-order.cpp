class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> sol(deck.size(), 0);
        queue<int> q1;
        for(int i = 0; i<deck.size(); i++){
            q1.push(i);
        }
        int i = 0;    
        while(!q1.empty()){
            sol[q1.front()] = deck[i];
            q1.pop();
            q1.push(q1.front());
            q1.pop();
            i++;
        }
        return sol;
    }
};