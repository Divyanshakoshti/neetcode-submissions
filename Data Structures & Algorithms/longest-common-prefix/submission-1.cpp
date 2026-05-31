class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
    //     string res="";
    //     for(int i=0;i<strs[0].size();i++){
    //         for(auto s:strs){
    //             if(s[i]!=strs[0][i]){
    //                 return res;
    //             }
    //         }
    //     res+=strs[0][i];
    //     }
    // return res;
    string ans = "";
    sort(s.begin(), s.end());

    int i = 0;
    while (i < s[0].length() &&
           s[0][i] == s[s.size() - 1][i]) {
        ans += s[0][i];
        i++;
    }
    return ans;
    }
};