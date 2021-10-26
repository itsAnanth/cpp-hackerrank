#include <bits/stdc++.h>

using namespace std;

vector<int> sortV(vector<int> &arr);

int main() {
  	vector<int> array = {3, 2, 1, 4, 8, 10};
  	sortV(array);
  	for (int i : array)
    	cout << i << " ";
}

vector<int> sortV(vector<int> &arr) {
  	int size = arr.size();
  	for (int i = 0; i < size; i++) {
    	for (int j = i + 1; j < size; j++) {
      		if (arr[j] < arr[i]) {
        		int temp = arr[i];
        		arr[i] = arr[j];
        		arr[j] = temp;
      		}
    	}
  	}

  return arr;
}
