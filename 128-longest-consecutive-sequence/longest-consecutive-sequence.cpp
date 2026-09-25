class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=1;
        int currcnt=0;
        int lastsml=INT_MIN;
        sort(nums.begin(),nums.end());  //better solution but not optimal
        bool acc=true;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsml){
                currcnt+=1;
                lastsml=nums[i];
            }
            else if(nums[i]!=lastsml){
                currcnt=1;
                lastsml=nums[i];
            }
              longest=max(longest,currcnt);
              acc=false;

        }
        if(acc==true){
            return 0;
        }
      
        return longest; //time complexity of O(nlogn+n)
        
    }
};