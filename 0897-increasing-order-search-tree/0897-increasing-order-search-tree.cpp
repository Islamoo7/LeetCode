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


void InorderRec(Tree *pt, vector<int>& Visit){
    if(*pt){
        InorderRec(&((*pt)->left), Visit);
        Visit.push_back((*pt)->val);
        InorderRec(&((*pt)->right), Visit);
    }
}

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> sol;
        InorderRec(&root, sol);
        TreeNode* head = (TreeNode*)malloc(sizeof(TreeNode));
        head->right = NULL; head->left = NULL; head->val = sol[0];
        Tree prev = head;

        for(int i = 1; i<sol.size(); i++){
            Tree pn = (Tree)malloc(sizeof(TreeNode));
            pn->val = sol[i];
            pn->left = NULL; 
            pn->right = NULL;
            prev->right = pn;
            prev = pn; 
        }
       
        return head;
        
    }
};