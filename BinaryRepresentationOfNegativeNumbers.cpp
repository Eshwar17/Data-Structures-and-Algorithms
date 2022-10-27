#include<bits/stdc++.h>
using namespace std;
/*
Internally it is converted using 2's compliment -> 1's compliment + 1
*/
int main()
{
    int n;
    cin >> n;
    bitset<16> x(n);
    cout << "Binary Representation of given number is " << x << endl;
 return 0;
}