class RecentCounter {
public:
    queue<int>q1;

    RecentCounter() {

    }
    
    int ping(int t) {
        while(!q1.empty() && (t-3000)>q1.front())
            q1.pop();
        q1.push(t);
        return q1.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */