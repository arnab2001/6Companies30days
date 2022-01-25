class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
        // Your Code Here
        if(!root)
            return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            Node* ptr=NULL;
            while(n--)
            {
                Node* temp=q.front();
                q.pop();
                if(!ptr)
                    ptr=temp;
                else
                {
                    ptr->nextRight = temp;
                    ptr=ptr->nextRight;
                }
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ptr->nextRight=NULL;
        }
    }    
      
};
