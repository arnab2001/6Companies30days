class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
         string res="";
      unordered_map<char,int>mp;
        for(int i=0;i<str1.length();i++){
           mp[str1[i]]++; 
        }
        for(int i=0;i<str2.length();i++){
            mp[str1[i]]--;
        }
        unordered_map<char, int>::iterator it;
       for (it = mp.begin(); it != mp.end(); it++)
       {
           for(int i=0;i<it->second;i++) {
               res=it->first+res;
           }
       }
        
    return res;
        
    }
};
