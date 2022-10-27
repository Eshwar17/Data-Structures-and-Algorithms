#include<bits/stdc++.h>
using namespace std;
/*
Approach 1 : Brute Force Approach
iterate until 30 and check each value whether it is equal to given or not using a for loop

Approach 2 : Counting set bits(O(log n))
1. intialize x = 1
2. Do btiwise and between x and n
3. leftshit x until all set bits are counted 
4. if it is not zero then increase the count var by one
5. return true if the count is one

Approach 3 : Bit shift (O(log n))
1. right shit n until we reach set bit
2. if n == 1 return true else false

Approach 4 : Log operation (O(1))
1. if floor(log2(n)) == ceil(log2(n)) return true else false
*/
//Approach 3
bool solution(int n) {
    if(n == 0) {
        return false;
    }
    while(n > 1 && (n & 1) == 0){
        n >>= 1;
    }
    return n==1?true:false;
}
//Approach 4
bool solution1(int n) {
    if(n == 0) {
        return false;
    }
    return floor(log2(n))==ceil(log2(n))?true:false;
}
int main()
{
    int n;
    cin >> n;
    cout << "The solution is " << solution(n) << endl;
 return 0;
}