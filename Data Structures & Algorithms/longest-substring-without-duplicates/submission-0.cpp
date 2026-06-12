class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_set<char>st;
        int l=0,n=s.size();
        int maxlength=0;
        for(int r=0;r<n;r++) {
           while(st.count(s[r])){
            st.erase(s[l]);
            l++;
           }
           st.insert(s[r]);
           maxlength=max(maxlength,r-l+1);
        }
    return maxlength;
    }
};
