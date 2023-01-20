#include <bits/stdc++.h>
using namespace std; 



/*
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill
 *  2. INTEGER k
 *  3. INTEGER b
 */

void bonAppetit(vector<int> bill, int k, int b) {
	int sumCommonBill = 0; 
	for(int i = 0; i < bill.size(); i++) {
		if(i != k) {
			sumCommonBill += bill[i]; 
		}
	}
	int annaCost = sumCommonBill / 2;
	if (annaCost == b) {
		cout << "Bon Appetit" << endl; 
	} else {
		cout << b - annaCost << endl;  
	}
}


int main() {
	int n = 4; 
	int k = 1; 
	vector<int> bill{3, 10, 2, 9}; 
	int b = 12; 
	bonAppetit(bill, k, b); 
}