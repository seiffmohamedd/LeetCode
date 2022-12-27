#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <fstream>
#include <list>

using namespace std;
struct ListNode{
    int val;
    ListNode *next;

};
class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {   //{3,2,4} t = 6 i=1 , j=2

        vector<int> v2;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if(i==j)break;
                else{
                    if(nums[i]+nums[j]==target)
                    {
                        v2.push_back(j);
                        v2.push_back(i);
                        cout<<v2[0];
                        cout<<v2[1];
                        return v2;


                    }
                }
            }
        }
        return v2;
    }
};
int main() {

    Solution s;
    vector<int>v={3,3};
    int target=6;
    s.twoSum(v,target);
    return 0;
}






