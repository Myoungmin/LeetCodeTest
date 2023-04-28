#pragma once

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int nSize = nums.size();

        for (int i = 0; i < nSize; i++)
        {
            for (int j = i + 1; j < nSize; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    answer.push_back(i);
                    answer.push_back(j);

                    return answer;
                }

            }
        }

        return answer;
    }
};

