// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         long long max_pro= INT_MIN;
//         long long pro=1;
//         bool flag=false;
//         for(int i=0 ;i<nums.size();i++){
//             pro*=nums[i];

//             if(pro>max_pro){
//                 max_pro=pro;
//             }
//             if(pro==0){
//                 pro=-1;
//             }
//             flag=true;

//         } if(flag==false) return nums[0];
//         return max_pro;
//     }
// };
 

 class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int answer = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                swap(maxEnding, minEnding);
            }

            maxEnding = max(nums[i], maxEnding * nums[i]);
            minEnding = min(nums[i], minEnding * nums[i]);

            answer = max(answer, maxEnding);
        }

        return answer;
    }
};