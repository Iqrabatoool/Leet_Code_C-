#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int original_x = x;
        int reversed_x = 0;
        while (x != 0) {
            int digit = x % 10;
            if (reversed_x > (INT_MAX - digit) / 10) {
                return false;
            }
            reversed_x = reversed_x * 10 + digit;
            x /= 10;
        }
        return original_x == reversed_x;
    }
};
int main(){
//	cout<<INT_MAX;
	Solution s1;
	cout<<s1.isPalindrome(123321);
 return 0;
}
