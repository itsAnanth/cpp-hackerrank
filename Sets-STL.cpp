#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, q, v;
    set<int> s;
    set<int>::iterator it;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q >> v;
        if (q == 1)
            s.insert(v);
        else if (q == 2)
            s.erase(v);
        else {
            it = s.find(v);
            if (it != s.end())
                cout << "Yes" << endl;
            else 
                cout << "No" << endl;
        }
        
    }
    return 0;
}



