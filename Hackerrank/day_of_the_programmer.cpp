#include <bits/stdc++.h>

using namespace std; 

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
	// julian calendar
	if(year <= 1917 && year >= 1700) {
		// leap year
		if (year % 4 == 0) {
			vector<int> months{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
			int remainDays = 256;
			int i = 0; 
			while (remainDays > months[i]) {
				remainDays -= months[i];
				i++; 
			}
			string month = to_string(++i);
			if( month.length() == 1) {
				month = "0" + month; 
			}
			return to_string(remainDays) + "." + month + "." + to_string(year); 
		} else {
			vector<int> months{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
			int remainDays = 256;
			int i = 0; 
			while (remainDays > months[i]) {
				remainDays -= months[i];
				i++; 
			}
			string month = to_string(++i);
			if( month.length() == 1) {
				month = "0" + month; 
			}
			return to_string(remainDays) + "." + month + "." + to_string(year); 
		}
	} //  geruious calendar
	else if(year >= 1919 && year <= 2700) {
		// leap year
		if (year % 400 == 0  || (year % 4 == 0 && year % 100 != 0) ) {
			vector<int> months{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
			int remainDays = 256;
			int i = 0; 
			while (remainDays > months[i]) {
				remainDays -= months[i];
				i++; 
			}
			string month = to_string(++i);
			if( month.length() == 1) {
				month = "0" + month; 
			}
			return to_string(remainDays) + "." + month + "." + to_string(year); 
		} else {
			vector<int> months{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
			int remainDays = 256;
			int i = 0; 
			while (remainDays > months[i]) {
				remainDays -= months[i];
				i++; 
			}
			string month = to_string(++i);
			if( month.length() == 1) {
				month = "0" + month; 
			}
			return to_string(remainDays) + "." + month + "." + to_string(year); 
		}
	} else if ( year == 1918) {
			vector<int> months{31, 15, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
			int remainDays = 256;
			int i = 0; 
			while (remainDays > months[i]) {
				remainDays -= months[i];
				i++; 
			}
			string month = to_string(++i);
			if( month.length() == 1) {
				month = "0" + month; 
			}
			return to_string(remainDays) + "." + month + "." + to_string(year); 
	} 
	return "error"; 
}

int main() {
	// test 
	int year = 2017; 
	string result = dayOfProgrammer(year); 
	cout << result << endl;  
	return 0; 
}