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
void PreorderRec(Tree *pt, vector<int>& vect){
    if(*pt){
        vect.push_back((*pt)->val);
        PreorderRec(&((*pt)->left),vect);
        PreorderRec(&((*pt)->right),vect);
    }
}
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sol;
        PreorderRec(&root, sol);
        return sol;
    }
};