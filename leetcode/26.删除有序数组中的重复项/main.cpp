class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
        {
            return 0;
        }
        int idx = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[idx] != nums[i])
            {
                nums[++idx] = nums[i];
            }
        }
        return idx + 1;
    }
};
