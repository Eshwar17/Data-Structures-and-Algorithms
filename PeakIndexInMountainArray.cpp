#include<bits/stdc++.h>
using namespace std;
/*
Approach : 
Using binary search:
1. if a[mid] < a[mid + 1] -> s = mid + 1
2. else e = mid
3. finally i will return my s
*/
int solution(vector<int> v) {
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    while(s < e) {
        if(v[mid] < v[mid + 1]) {
            s = mid + 1;
        }else{
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
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
    cout << solution(v) << endl;
 return 0;
}