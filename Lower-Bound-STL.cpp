#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a.push_back(v);
    };
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        vector<int>::iterator upper;
        int v;
        cin >> v;
        if (binary_search(a.begin(), a.end(), v)) {
            upper = lower_bound(a.begin(), a.end(), v);
            cout << "Yes" << " " << *a.begin() << endl;
        } else {
            upper = lower_bound(a.begin(), a.end(), v);
            cout << "No" << " " << upper - a.begin() + 1 << endl;
        }
    }
    return 0;
}
