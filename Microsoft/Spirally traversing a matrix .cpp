// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
                // code here 
        vector<int> a;
        int r1=r,c1=c;
        while(r1>r/2 && c1>c/2)
        {
            for(int i=c-c1;i<c1;i++)
            {
                a.push_back(matrix[r-r1][i]);
            }
            for(int i=r-r1+1;i<r1-1;i++)
            {
                a.push_back(matrix[i][c1-1]);
            }
            if((r-r1)!=r/2 && (c-c1)!=c/2)
            {
                for(int i=c1-1;i>=c-c1;i--)
                {
                    a.push_back(matrix[r1-1][i]);
                }
                for(int i=r1-2;i>=r-r1+1;i--)
                {
                    a.push_back(matrix[i][c-c1]);
                }
            }
            if((c-c1)==c/2 && r!=c)
                a.push_back(matrix[r1-1][c1-1]);
            r1--;
            c1--;
        }
        return a;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
