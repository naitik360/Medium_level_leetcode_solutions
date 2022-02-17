class Solution {
public:
    int idx=0;
    vector<int> k;
    TreeNode* find(int l,int h)
    {
        if(idx==k.size())
            return NULL;
        int val = k[idx];
        if(val<l || val>h)
            return NULL;
        idx++;
        TreeNode* root=new TreeNode(val);
        root->left=find(l,val);
        root->right=find(val,h);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& v) {
        if(v.size()==0)
            return {NULL};
        else
            k=v;
            return find(INT_MIN,INT_MAX);
    }
};