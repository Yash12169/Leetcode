class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n = s.length();
       set<char> charSet;
       int maxi=0;
       int left =0;

       for(int right =0;right<n;right++){
            if(charSet.count(s[right])==0)
            {
                charSet.insert(s[right]);
                maxi = max(maxi,right-left+1);
            }
            else{
                while(charSet.count(s[right])){
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[right]);
            }
       }
       return maxi;
    }
};