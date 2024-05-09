/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 typedef TreeNode* Tree;
 void PostorderRec(Tree *pt, vector<int>& vect){
    if(*pt){
        PostorderRec(&((*pt)->left), vect);
        PostorderRec(&((*pt)->right), vect);
        vect.push_back((*pt)->val);
    }
}

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> sol;
        PostorderRec(&root, sol);
        return sol;
    }
};