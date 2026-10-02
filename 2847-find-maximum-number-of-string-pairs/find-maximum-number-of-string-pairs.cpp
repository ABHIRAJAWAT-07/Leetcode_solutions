class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& nums) {
        int n=nums.size();
        int count=0;
        unordered_set<string>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int i=0;i<n;i++){
            string rev=nums[i];
            reverse(rev.begin(),rev.end());
            if(nums[i]==rev){ 
                continue;
            }
            if(st.find(rev)!=st.end()){
                count++;
                st.erase(nums[i]);
            }
            
        }
        return count;
    }
};