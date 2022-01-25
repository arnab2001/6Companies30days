
class Solution
{
    public:
  
    vector <int> calculateSpan(int price[], int n)
    {
             
        vector <int> v;
      stack<pair<int,int>>s;
     
      for(int i=0;i<n;i++){
          while(!s.empty() and s.top().first<=price[i]){
              s.pop();
          }
          s.empty()? v.push_back(-1): v.push_back(s.top().second);
          s.push({price[i],i});
      }
     for(int i=0;i<v.size();i++){
         v[i]=i-v[i];
     }
      return v;
   }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		So
