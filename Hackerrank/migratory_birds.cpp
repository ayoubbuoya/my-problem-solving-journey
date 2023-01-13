#include <bits/stdc++.h>

using namespace std;


void printMap(map<int, int> m) {
	map<int, int>::iterator itr; 
	for(itr = m.begin(); itr != m.end(); itr++) {
		cout << itr->first << " : " << itr ->second << endl; 
	}
}

pair<int, int> findMaxMapEntry(map<int, int> m) {
	pair<int, int> maxEntry = make_pair(0, 0);
	map<int, int>::iterator itr; 
	for(itr = m.begin(); itr != m.end(); itr++) {
		if (itr->second > maxEntry.second) {
			maxEntry = make_pair(itr->first, itr->second); 
		}
	}
	return maxEntry; 
}

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {
	map<int, int> map;
	// get all bird types with number of types in a map(dictionnary)
	for(int i = 0; i < arr.size(); i++) {
		map[arr[i]]++; 
	}
	// printMap(map); 
	// get the maximum
	pair<int, int> maxEntry = findMaxMapEntry(map);
	return maxEntry.first; 
}


int main() {
	int n = 6; 
	vector<int> arr{1, 4, 4, 4, 5, 3}; 
	int result = migratoryBirds(arr); 
	cout << result << endl;
	return 0; 
}