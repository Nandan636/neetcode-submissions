class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
       //problem is , if there are more than 2 same numbers then the index gets changed and first occuing one is not counted so do one pass, where check if rem =  target - nums[i] exists . if there return value of rem and j, else store nums[i] = i;
        int rem = 0;
       for(int i = 0;i<nums.size();i++){
        rem = target - nums[i];
        if(mp.find(rem)!=mp.end()){
            return{mp[rem],i};
        }
        mp[nums[i]]=i;
       } 
       return {};
    }
};
