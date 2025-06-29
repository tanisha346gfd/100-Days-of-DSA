// Day 1: Generate all binary strings without consecutive 1's
// Problem Link: https://www.geeksforgeeks.org/problems/generate-all-binary-strings/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void res(string s, int num, vector<string>& v) {
        if (num == 0) {
            v.push_back(s);
            return;
        }

        res(s + '0', num - 1, v);

        if (s.empty() || s.back() == '0') {
            res(s + '1', num - 1, v);
        }
    }

    vector<string> generateBinaryStrings(int num) {
        vector<string> v;
        res("", num, v);
        return v;
    }
};
