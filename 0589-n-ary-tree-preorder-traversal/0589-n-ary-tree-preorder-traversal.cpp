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
void PreorderRec(Node** pt, vector<int>& vect){
    if(*pt){
        vect.push_back((*pt)->val);
        for(int i = 0; i<((*pt)->children).size();i++)
            PreorderRec(&(((*pt)->children)[i]), vect);
    }
}
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> sol;
        PreorderRec(&root, sol);
        return sol;
    }
};