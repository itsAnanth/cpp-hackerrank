#include <bits/stdc++.h>

using namespace std;
int main() {
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(10);

    /**
     * for of iteration
     */
    for (int it : s)
        cout << it << endl;
    
    s.erase(1);

    for (int it : s) cout << it << endl;

    cout << "size of the set is " << s.size() << endl;

    cout << "for loop" << endl;
    for (set<int>::iterator it = s.begin(); it != s.end(); it ++)
        cout << (*it) << endl;
    set<int>::iterator it = s.find(-1);

    if (it != s.end()) cout << "el" << *it << endl;
    else cout << "no el";
    
}
