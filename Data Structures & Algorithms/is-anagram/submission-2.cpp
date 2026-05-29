class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
    //     unordered_map<char,int>freq;
    //     for(char ch:s){
    //         freq[ch]++;
    //     }
    //     for(char ch:t){
    //         freq[ch]--;
    //         if(freq[ch]<0){
    //             return false;
    //         }
    //     }
    // return true;
    int a[26]={0};
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']++;
        a[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(a[i]){
            return false;
        }
      }
    return true;
    }
};
