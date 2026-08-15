class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int n : nums ){
            if(seen.count(n)){//return 1 if n is present
                return true ;
                
            }
            seen.insert(n);//since not there insert it to set
        }
        return false;
    }
};