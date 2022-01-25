// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    static String keypad[] = new String[]{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    //Function to find list of all words possible by pressing given numbers.
    static ArrayList <String> possibleWords(int a[], int N)
    {
        return helper("",a,0,N); 
    }
    static ArrayList<String> helper(String p,int a[], int index, int n){
        ArrayList<String> res = new ArrayList<>();
        if(index == n){
            res.add(p);
            return res;
        }
        
        String s = keypad[a[index]];
        for(int i=0;i<s.length();i++){
            res.addAll(helper(p+s.charAt(i), a, index+1, n));
        }
        return res;
    }
}
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends
