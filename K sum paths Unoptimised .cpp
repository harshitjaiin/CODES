//User function template for C++

/*
struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    void solve(Node * root, int k,int sum,int & count){
       if(root==NULL){
           return;
       }
       
       sum+=root->data;
       
       if(sum==k){
           count++;
          return ;
       }
       
       
       solve(root->left ,k,sum,count);
       solve(root->right,k,sum,count);
       
    }
    void preOrder(Node *root,int k,int sum,int &count){ 
    if (root != NULL){
        solve(root,k,sum,count);
        preOrder(root->left,k,sum,count);
        preOrder(root->right,k,sum,count);
     }
     
    }
  public:
    int sumK(Node *root,int k)
    {
        // code here
        int sum=0;
        int count=0;
        preOrder(root,k,sum,count);
        
        return count;
    }
};
