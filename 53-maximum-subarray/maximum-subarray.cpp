class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxLen=INT_MIN;
        long long sum=0;
       for(int i=0;i<nums.size();i++){
            sum+=nums[i];

             if(sum > maxLen){
                maxLen=sum;
            }
             if(sum<0){
                sum=0;
            }

         }   
        return maxLen;      
    }
};