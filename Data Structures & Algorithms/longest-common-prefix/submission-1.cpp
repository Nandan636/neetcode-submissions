class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // unnessccary unordered_map<int,string> mp;
        // first intiution is very long that is to store each prefix and blah blah. so here i just store prefix that exist in all by checing , i just have to check with first word
        string prefix = strs[0];
        for(int i = 0;i<strs[0].size();i++){
            for(int j = 1 ;j<strs.size();j++){
                
                if(i>=strs[j].size()  || prefix[i]!=strs[j][i]){
                    return prefix.substr(0,i);
                }
            }
            
        }
        return prefix;
    }
};