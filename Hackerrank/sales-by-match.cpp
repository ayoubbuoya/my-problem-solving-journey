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

bool isInVector(vector<int> v, int n) {
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == n) {
			return true; 
		}
	}
	return false; 
}
int calcReptition(int n, vector<int> v) {
	int rep = 0; 
	for(int i = 0; i < v.size(); i++) {
		if (v[i] == n) {
			rep++; 
		}
	}
	return rep; 
}

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
	sort(ar.begin(), ar.end()); 
	vector<int> colors;
	for(int i = 0; i < ar.size(); i++) {
		if (!isInVector(colors, ar[i])) {
			colors.push_back(ar[i]); 
		}
	} 
	vector<int> reps; 
	for(int i = 0; i < colors.size(); i++) {
		int rep = calcReptition(colors[i], ar); 
		reps.push_back(rep); 

	} 
	int pairs = 0; 
	for(int i = 0; i < colors.size(); i++) { 
			pairs += (reps[i] / 2); 
	}
	return pairs; 
}


int main() {
	int n = 9; 
	vector<int> ar {10, 20, 20, 10, 10, 30, 50, 10, 20};
	int result = sockMerchant(n, ar);
	cout << result << endl;
	return 0; 
}