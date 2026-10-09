class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        
        unordered_map<int, int> mpp;
        for(int i =0;i<nums.size();i++){
            int rem=target- nums[i];
            if(mpp.find(rem)!=mpp.end()){
                res.push_back(mpp[rem]);
                res.push_back(i);

            }
            else mpp[nums[i]]=i;
        }
        return res;
    }
};