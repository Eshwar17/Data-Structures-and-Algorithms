#include<bits/stdc++.h>
using namespace std;
//Approach : Reversal Algorithm
/*
Steps : 
1. Reverse entire array
2. Reverse last d elements
3. Reverse first (N - d) elements

TC : O(N)
SC : O(N)

*/
//utility functions
void reverse(int *arr, int start, int end) {
    while(start <= end) {
        swap(arr[start++], arr[end--]);
    }
}
//print function
void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}
void solution(int *arr, int n, int d) {
    //edge case
    if(d == 0 || d == n) {
        return;
    }
    //d boundary check
    if(d > n) {
        d = d % n;
    }
    reverse(arr, 0, n - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, d - 1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    solution(arr, n, d);
    printArray(arr, n);
 return 0;
}