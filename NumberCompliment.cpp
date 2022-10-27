/*
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer num, return its complement.

Example 1:
Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
Example 2:
Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
 
Constraints:
1 <= num < 231
*/
#include<bits/stdc++.h>
using namespace std;
/*
Approach:
Steps:
1. Get 1's compliment of the given number - 5 -> ~(000...00101)->111111111...1010
2. Generate mask - mask->000000.....0111
3. Return bitwise and of above two steps - step 1 & step 2
4. 0000000...0010
mask :
1. intially it is 0
1. while->n!=0->(mask<<1) | 1
1. final result : return (~n) & mask
*/
int solution(int n) {
    int mask = 0;
    int num = n;
    while(num != 0) {
        mask = (mask << 1) | 1;
        num = num >> 1;
    }
    return (~n) & mask;
}
int main()
{
    int n;
    cin >> n;
    cout << solution(n) << endl;
 return 0;
}