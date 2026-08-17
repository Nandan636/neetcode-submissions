void merge(vector<int>  &a, int low, int mid , int high){
    vector<int> b;
    int k = 0, i =low,j=mid + 1;
    while(i<=mid && j<=high ){
        if(a[i]<a[j]){
            b.push_back(a[i++]);
        }
        else{
            b.push_back(a[j++]);
        }
    }
    while(i<=mid){
        b.push_back(a[i++]);
    }
    while(j<=high){
        b.push_back(a[j++]);
    }
    for(int i = 0;i<b.size();i++){
        a[low+i]=b[i];
    }
    
}
void ms(vector<int> &a, int low , int high){
    if(low<high){
        int mid = (low+high)/2;
        ms( a,low,mid);
        ms(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       int low =0 ,high=nums.size() -1;
       ms(nums,low,high);
       return nums; 
    }
};