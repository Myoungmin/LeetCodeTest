#pragma once

#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int before = 0;

        map<char, int> romanMap = { 
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10},
            {'L', 50}, 
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        for (char c : s)
        {
            if (before == 1)
            {
                if (romanMap[c] == 5 || romanMap[c] == 10)
                {
                    result -= 2;
                }
            }
            else if (before == 10)
            {
                if (romanMap[c] == 50 || romanMap[c] == 100)
                {
                    result -= 20;
                }
            }
            else if (before == 100)
            {
                if (romanMap[c] == 500 || romanMap[c] == 1000)
                {
                    result -= 200;
                }
            }
            before = romanMap[c];
            result += romanMap[c];
        }

        return result;
    }
};

