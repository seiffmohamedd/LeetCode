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
    ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}

};
class Solution {
public:
    //Solution one (NORMAL)
    bool isPalindrome(int x) {    // s->lifo       q->fifo   121
        if(x<0)
        {
            return false;
        }
      else
        {
          string s=to_string(x);
          int si,c;
          c=s.size();
          si= ceil(s.size()/2);
            for (int i = 0; i < si; ++i) {
                if(s[i]==s[c-1])
                {
                    c--;
                }
                else
                {return false;}
            }
            return true;
        }
    }
};
int main() {

    Solution s;
    int l;
    s.isPalindrome(l);
    return 0;
}





