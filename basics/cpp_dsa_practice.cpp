class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {

                if (nums[j] != val)
                {
                    k++;
                }

                if (nums[i - 1] == val)
                {
                    nums[i - 1] = nums[i];
                }
            }
        }
    }
};