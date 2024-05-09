class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> s;
        int  i = 0;
        for(i = 0; i<students.size(); i++){
            q.push(students[i]);
            s.push(sandwiches[sandwiches.size()-i-1]);
        }
        i = 0;
        while(!s.empty() && (i < q.size())){
            if(s.top()==q.front()){
                s.pop();
                q.pop();
                i = 0;
            }
            else{
                q.push(q.front());
                q.pop();
                i++;
            }
        }
        return q.size();
    }
};