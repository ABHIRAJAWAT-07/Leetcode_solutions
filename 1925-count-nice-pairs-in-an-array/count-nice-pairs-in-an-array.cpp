class Solution {
public:
int rev(int n){
    int r=0;
    while(n>0){
        r*=10;
        r+=(n%10);
        n/=10;
        
    }
    return r;
}
 
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            nums[i]-=rev(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(mpp.find(nums[i])!=mpp.end())
            {    count = count%1000000007;
                 count += mpp[nums[i]];
                  
            }
            mpp[nums[i]]++;
        }
        return count%1000000007;
    }
};