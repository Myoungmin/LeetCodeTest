#pragma once

#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;

        int nIndex = 0;
        while (true)
        {
            map<char, int> charMap;
            char cLast;

            for (auto& a : strs)
            {
                if (nIndex >= a.length()) break;

                int nValue = charMap[a[nIndex]];
                nValue++;
                charMap[a[nIndex]] = nValue;
                cLast = a[nIndex];
            }

            if (charMap[cLast] != strs.size())
            {
                break;
            }

            result += cLast;
            nIndex++;
        }

        return result;
    }
};

