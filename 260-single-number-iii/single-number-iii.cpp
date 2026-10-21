class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        vector<int>vt;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        for(auto x: mpp){
            if(x.second==1){
                vt.push_back(x.first);

            }
        }
       return vt; 
    }
};