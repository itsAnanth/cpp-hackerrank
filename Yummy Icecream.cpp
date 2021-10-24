#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int e;
    int tv;
    int i = 0;
    cin >> e;
    vector<int> values;
    map<int, int> m;


    while (cin >> n) {
        values.push_back(n);
    }

    for (vector<int>::iterator it = values.begin(); it != values.end(); it++) {
        m[*it]++;
    }

    if (m.find(0) != m.end()) {
        cout << m[0] << " free ice-cream served." << endl;
        cout << "Number of children served: " << values.size() << endl;
    } else {
        cout << "Profit target achieved. Bye!!" << endl;
        cout << "Number of children served: " << values.size() << endl;
    }
}
