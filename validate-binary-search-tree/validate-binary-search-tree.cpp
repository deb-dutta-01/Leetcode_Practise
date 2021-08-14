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
class Solution {
public:
    void inOrderTraversal(TreeNode *root, vector<int> &array) {
        if (root == nullptr)
            return;
        inOrderTraversal(root->left, array);
        array.push_back(root->val);
        inOrderTraversal(root->right, array);
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> array;
        inOrderTraversal(root, array);
        
        for (int i = 1; i < array.size(); i++)
            if (array[i - 1] >= array[i])
                return false;
        
        return true;
    }
};