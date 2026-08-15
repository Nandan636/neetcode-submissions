class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n,n);
        int i = 0,j= 0;
        while(i<2*n){
            if(j == n){
                j = 0;
            }
            ans[i++]=nums[j++];
        }
        return ans;
    }
};