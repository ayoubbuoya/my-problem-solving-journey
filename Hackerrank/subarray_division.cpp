#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> v) {
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " "; 
	}
	cout << endl; 
}

void printMatrix(vector<vector<int>> v) {
	for(int i = 0; i < v.size(); i++) {
		printVector(v[i]); 
	}
}

int birthday(vector<int> s, int d, int m) {
	// getting all segments that size == m 
	vector<vector<int>> segments; 
	for(int i = 0; i < s.size(); i++) {
		int j = i; 
		vector<int> segment; 
		while (j < i + m && j < s.size()) {
			segment.push_back(s[j]);  
			j++; 
		}
		int sum = 0; 
		// printVector(segment);
		if (segment.size() == m) {
			for(int k = 0; k < m; k++) {
				sum += segment[k]; 
			}
			if (sum == d) {
				segments.push_back(segment);
			}
		}
	}
	// printMatrix(segments);
	return segments.size(); 
}


int main() {
	int n = 5; 
	vector<int> s{1, 2, 1, 3, 2};
	int d = 3; 
	int m = 2;
	int result = birthday(s, d, m);  
	cout << result << endl; 
	return 0; 
}