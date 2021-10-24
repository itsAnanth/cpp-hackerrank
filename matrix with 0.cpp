#include <bits/stdc++.h>

using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  string ans;

  if (r <= 0 || c <= 0)
    cout << "Wrong Input.";
  else {
    for (int i = 1; i <= 8; i++) {
      if (i == c)
        ans += "0 ";
      else
        ans += "X ";
    }
    ans += "\n";

    for (int i = 1; i <= 8; i++) {
      string temp = ans;
      if (i == r)
        replace(temp.begin(), temp.end(), 'X', '0');
      cout << temp;
    }
  }
}
