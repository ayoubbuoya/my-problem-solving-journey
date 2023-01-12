#include <bits/stdc++.h>

using namespace std;


void printVector(vector<int> v) {
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " "; 
	}
	cout << endl; 
}
/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> ar) {
	int numPairs = 0; 
	for(int i = 0; i < n; i++) {
		for(int j = i ; j < n; j++) {
			if (i != j && (ar[i] + ar[j]) % k == 0) {
				vector<int> pair; 
				pair.push_back(ar[i]); 
				pair.push_back(ar[j]); 
				numPairs++; 
				// printVector(pair); 
			}
		}
	}
	return numPairs; 
}

int main() {
	// testing 
	int n = 6; 
	int k = 3;
	vector<int> ar{1, 3, 2, 6, 1, 2}; 
	int result = divisibleSumPairs(6, 3, ar);
	cout << result << endl; 

}