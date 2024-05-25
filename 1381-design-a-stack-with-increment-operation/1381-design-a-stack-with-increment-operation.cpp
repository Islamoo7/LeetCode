class CustomStack {
public:
    int max = 0;
    vector<int> s;
    CustomStack(int maxSize) {
        max = maxSize;
    }
    
    void push(int x) {
        if(s.size()!=max){
            s.push_back(x);
        }
    }
    
    int pop() {
        
        if(!s.empty()){
            int x = s.back();
            s.pop_back();
            return x;
        }
        return -1;

    }
    
    void increment(int k, int val) {
        for( int i =0; i<k && i <s.size(); i++){
            s[i]+= val;
         }

        
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */