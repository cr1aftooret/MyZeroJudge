#include<bits/stdc++.h>
using namespace std;

int bubble_sort(vector<int>& arr, int n) {
	int count = 0;
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - 1 - i; j++){
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				count++;
			}
		}
	}

	return count;
}

int main() {
	int n;
	cin >> n;

	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int data;
		cin >> data;
		arr.push_back(data);
	}

	cout << bubble_sort(arr, n);
}