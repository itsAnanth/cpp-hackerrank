#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, c, d, e;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    cin >> c >> d >> e;
    
    a.erase(a.begin() + (c - 1));
    a.erase(a.begin() + (d - 1), a.begin() + (e - 1));
    
    cout << a.size() << endl;
    for (int u : a)
        cout << u << " "; 
    
    return 0;
}
