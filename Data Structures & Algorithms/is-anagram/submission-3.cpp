class Solution {
public:
    bool isAnagram(string s, string t) {
        // check if length are same
        if(s.length()!=t.length()){
            return false;
        }
        //check if same elemts preset by sorting
        //using hash map
        unordered_map<char,int> counts;
        unordered_map<char,int> countt;
        for(int i = 0;i<s.length();i++){
            counts[s[i]]++;
            countt[t[i]]++;
        }
        return counts == countt;
    }
};
