#include<bits/stdc++.h>
using namespace std;
// 0 1 1 2 3 5 8 13 --------
/*
Find nth fibonacci number
Ex : fib(6) = 8
Approach : Using Principle of Mathematical Induction
1. Base case(prove F(0) or F(1) is true)
2. Induction Hypothesis : Assume F(k) is true
3. Induction : Prove F(k+1) is true using F(k)
*/

int fib(int n) {
    //step 1 
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    //step 2
    int smallOutput1 = fib(n - 1);
    int smallOutput2 = fib(n - 2);
    //step 3
    return smallOutput1 + smallOutput2; //f(n) = smallOutput1 + smallOutput2
}
int main()
{
    cout << fib(1);
 return 0;
}