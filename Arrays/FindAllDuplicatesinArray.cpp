class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int n:nums){
            n=abs(n);
            if(nums[n-1]>0){
                nums[n-1]*=-1;
            }
            else{
                result.push_back(n);
            }
        }
        return result;
    }
};
