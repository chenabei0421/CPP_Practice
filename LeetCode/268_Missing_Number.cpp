class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Sol1:
        //int result = 0;
        //int n=nums.size();
        //int sum = (1+n)*n/2;
        //for(int i=0; i<n; ++i)
        //{
        //    result += nums[i];
        //}
        //return sum - result; 
        
        //Sol2:
        //int sum=nums.size();
        //int sum2=0;
        //for(int i=0;i<nums.size();++i)
        //{
        //    sum+=i;
        //    sum2+=nums[i];
        //}
        //return sum-sum2;
        
        //Sol3:
        //Runtime: 32 ms, faster than 36.86% of C++ online submissions for Missing Number.
        //Memory Usage: 17.8 MB, less than 93.56% of C++ online submissions for Missing Number.
        int sum = 0, i;
        for(i = 0; i < nums.size(); i++) {
            sum = sum - nums[i] + i;
        }
        return sum + i;
    }
};