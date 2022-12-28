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
    //Solution two (challenge)
    bool isPalindrome(long long x) {    // s->lifo       q->fifo   121
        if(x<0)
        {
            return false;
        }
      else
        {
            long long x2=x;
            long long a=0;
            for (int i = 0; i < 31; ++i) {    // x=121  a=1  x=12  , x=12 a=12 x=1 , x=1 a=121 x=0      ////144
                a=(a*10)+(x%10);
                x= floor(x/10);
                if(x==0)break;
            }

            if(a==x2){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
int main() {

    Solution s;
    long long l=121;
    s.isPalindrome(l);
    return 0;
}





