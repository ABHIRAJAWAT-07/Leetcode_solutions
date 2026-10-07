class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }  
        for(int i=0;i<t.length();i++){
           char ch=t[i];
           if(mpp.find(ch)!=mpp.end()){
            mpp[ch]--;
            if(mpp[ch]==0) mpp.erase(ch);

           }
           else return false;


        }  
        if(mpp.size()>0) return false;
        return true; 

            
        
    }
};