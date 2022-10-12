#include<bits/stdc++.h>
using namespace std;
/*
Calculate x to the power n ?
Using PMI:
Steps:
1. Base Case -> Prove f(0) or f(1) is true
2. Induction Hypothesis -> Assume f(k) is true
3. Induction -> Prove f(k+1) is true using f(k)
*/
int power(int x, int n) {
    //step 1
    if(n == 0) {
        return 1;
    }
    if(n == 1) {
        return x;
    }
    //step 2
    int smallOutput = power(x, n - 1);
    //step 3
    int ans = x * smallOutput;
    return ans;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
 return 0;
}