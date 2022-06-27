class Solution {
public:
    vector<vector<int>> ans;
    void solve(TreeNode* root,int t,vector<int>  temp,int sum){
        if(root==NULL) return;
        temp.push_back(root->val);
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==t) ans.push_back(temp);
        }
        solve(root->left,t,temp,sum);
        solve(root->right,t,temp,sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<int> temp;
        solve(root,t,temp,0);
        return ans;
    }
};