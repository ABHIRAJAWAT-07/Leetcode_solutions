class Solution {
public:
    int reverse(int n){
        int r=0;
        while(n>0){
            r*=10;
            r+=(n%10);
            n/=10;

        }
        return r;
    }




    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            int rev=reverse(nums[i]);
            st.insert(nums[i]);
            st.insert(rev);
        }
        return st.size();
    }
};