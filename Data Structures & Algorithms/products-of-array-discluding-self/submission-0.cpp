class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(),1);
        int prefix= 1,suffix=1;
        int n = nums.size();
        for(int i = 0;i<n;i++){
          output[i]=prefix;
          prefix*=nums[i]; 
        }

        for(int i = n-1;i>=0;i--){
            output[i]*=suffix;
            suffix*=nums[i];
        }
        return output;
    }
};