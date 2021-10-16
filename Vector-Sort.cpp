//https://www.hackerrank.com/challenges/vector-sort/problem

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);  
    }
    
    sort(arr.begin(), arr.end());
    for (int i : arr)
        cout << i << " ";
    return 0;
}
