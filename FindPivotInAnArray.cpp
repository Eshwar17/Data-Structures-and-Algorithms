#include<bits/stdc++.h>
using namespace std;
/*
Pivot in an array -> Minimum element in the array(sorted & rotated array)
i/p : 7 9 1 2 3
o/p : 1
Approach 1 : Using linear search
tc: O(n)

Approach 2 : Using binary search
1. Find the mid element
2. Here we have 2 lines -> First line with large values, sec line with small values
3. Condition 1 : if arr[mid] >= arr[0] -> start = mid + 1
4. Condition 2 : else move left -> end = mid
5. return s

TC : O(log n)
*/
int pivotELement(int *arr, int n) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) /2;
    while(start < end) { // why it is (s < e) but not (s <= e) ? Ans : Bcoz if it is s <=e , it will again go back to the first line breaking the condiitions
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pivot = pivotELement(arr, n);
    cout << "The Pivot element in the given array is " << arr[pivot] << endl;
 return 0;
}