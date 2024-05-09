/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
void PostorderRec(Node** pt, vector<int>& vect){
    if(*pt){
        for(int i = 0; i<((*pt)->children).size();i++)
            PostorderRec(&(((*pt)->children)[i]), vect);
        vect.push_back((*pt)->val);
    }
}

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> sol;
        PostorderRec(&root, sol);
        return sol;
    }
};