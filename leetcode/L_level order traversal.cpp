//author @shreyamalogi
//https://leetcode.com/problems/binary-tree-level-order-traversal/



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
   vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root == NULL) return ans; 							//base case
        queue<TreeNode*> q;          							//take queue
        q.push(root);										//and push root
        
        while(!q.empty()){									//while q is not empty
            int size = q.size();								// get the size of q
            vector<int> level;								// declare level variable to keep track of level
            for(int i=0;i<size;i++){    						// run a loop till the size of q
                TreeNode* node = q.front(); 						//get the front of q
                q.pop();										//then pop the elements
                
                if(node->left != NULL) q.push(node -> left); 		//if node's left exists and is not null, then push the nodes left into the q
                if(node->right != NULL)q.push(node->right); 		//if node's right exists and is not null, then push the nodes left right the q
                
                level.push_back(node->val); 						//level.pushback node ka val
            }
            ans.push_back(level);								//ans.push_back(level);
        }
        return ans;											//return the ans
    }
};
