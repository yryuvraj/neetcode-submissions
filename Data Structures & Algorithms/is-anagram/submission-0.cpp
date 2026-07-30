class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>mp;
        map<char, int>mp2;
        int ans = 0; 
        int n = s.size();
        if(t.size() != s.size()){
            return false;
        }
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        } 
        for(int i=0; i<t.size(); i++){
            mp2[t[i]]++;
        } 
        for(auto [key, val] : mp){
            if(mp[key] == mp2[key]){
                ans += val;
            }
            else{
                continue;
            }
        }
        return s.size() == ans ? true : false;

    }
};
