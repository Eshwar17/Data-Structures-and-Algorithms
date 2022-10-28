#include<bits/stdc++.h>
using namespace std;
/*
Approach:
Using binary search, if the element is found we will store it in an variable and move towards right of the array
*/
int solution(vector<int> v, int ele) {
    int s = 0;
    int e = v.size();
    int mid = s + (e - s) / 2;
    int ans = 0;
    while(s <= e) {
        if(v[mid] == ele) {
            ans = mid;
            s = mid + 1;
        }else if(v[mid] < ele) {
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int ele;
    cin >> ele;
    cout << solution(v, ele) << endl;
 return 0;
}