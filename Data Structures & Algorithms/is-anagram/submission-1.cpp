class Solution {
public:
    bool isAnagram(string s, string t) {
        // check if length are same
        if(s.length()!=t.length()){
            return false;
        }
        //check if same elemts preset by sorting
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
    }
};
