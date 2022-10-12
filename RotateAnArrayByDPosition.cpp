#include<bits/stdc++.h>
using namespace std;
//rotate an arr  by d positions
//approach 1 :

// 1. initialize a temp arr
// 2. store ele from d to n-1 in my temp array
// 3. store first d ele in the back of my temp array
// 4. simply copy my temp array into original array

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }cout << "\n";
}

void solution(int *arr, int n, int d) {
    //initialize the temp array
    int temp[n];
    //to track the index of the temp array
    int k = 0;
    //copying the values from d to n-1
    for(int i = d; i < n; i++) {
        temp[k] = arr[i];
        k++;
    }
    //copying the first d values to the back of temp array
    for(int i = 0; i < d; i++) {
        temp[k] = arr[i];
        k++;
    }
    //equate original array to temp array
    arr = temp;
    cout << "Approach 1 : " << endl;
    printArray(arr, n);
}

//Approach 2 : Rotate one element by one element
/*Steps :
1. Store 0th index in temporary variable 
2. shift remaining elements to left by one
3. Replace last index with temporary var value
4. Repeat the above steps 'd' times using while loop

TC : O(n * d)
SC : O(1)
*/
void solutionApproach2(int *arr, int n, int d) {
    int p = 1;
    while(p <= d) {
        int temp = arr[0];
        for(int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
        p++;
    }
    cout << "Approach 2 : " << endl;
    printArray(arr, n);
}
//Approach 3 : The Juggling algorithm
/*
->It is an extension to approach 2(rotate one by one)
Steps:
1. Calculate the gcd of n and d
2. Divide the arr into different sets(no.of sets = gcd) -> sets include every ele with d distance
3. Each set undergoes shifiting with one element to left(each ith ele will be at last pos of each set)
4. Repeat the above process gcd no.of times
Note : d % n -> to ensure d is in the range of the array
TC : O(n)
SC : O(1)
*/

//Function to calculate GCD
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void solutionApproach3(int *arr, int n, int d) {
    d = d % n;
    int gcd_ = gcd(n, d);
    for(int i = 0; i < gcd_; i++) {
        int temp = arr[i];
        int j = i;
        while(1) {
            int k = j + d;
            if(k >= n) {
                k = k - n;
            }
            if(k == i) {
                break;
            }
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
    cout << "Approach 3 : " << endl;
    printArray(arr, n);
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
    solutionApproach2(arr, n, d);
    solutionApproach3(arr, n, d);
    
 return 0;
}