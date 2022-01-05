class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
          {
        int windowStart = 0;
        int windowEnd = 0;
        int n = nums.size();
        int sum = 0;
        int ans = INT_MAX;
        while (windowEnd < n)
        {
            sum += nums[windowEnd];
            if (sum < target)
            {
                windowEnd++;
            }
            else if (sum >= target) // if the condition is fulfilled
            {

                while (sum >= target)
                {
                    ans = min(ans, (windowEnd - windowStart + 1)); // we find the answer here as till the sum is greater than target there may be a possible soultion
                    sum -= nums[windowStart];                      // deduct the sum from front
                    windowStart++;
                }
                windowEnd++;
            }
        }
        if (ans == INT_MAX || ans < 0)
            return 0;
        return ans;
    }
        
    }
};
