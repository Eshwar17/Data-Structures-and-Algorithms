#include<bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> arr1, vector<int> arr2) {
    vector<int> ans;
    int i = 0, j = 0;
    while(i < arr1.size() && j < arr2.size()) {
        if(arr1[i] == arr2[j] && (i < arr1.size() && j < arr2.size())) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i] < arr2[j] && (i < arr1.size() && j < arr2.size())){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr1.push_back(temp);
    }
    for(int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        arr2.push_back(temp);
    }
    vector<int> ans = solution(arr1, arr2);
    for(auto ele : ans) {
        cout << ele << " ";
    }cout << endl;
 return 0;
}