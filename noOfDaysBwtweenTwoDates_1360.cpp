#include<bits/stdc++.h>
using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool isLeapYear(int &yy) {
	if ((yy % 4 == 0) && ((yy % 400 == 0) || (yy % 100 != 0)) ) return true;
	return false;
}
int convert(string &date) {
	string y, m, d;
	long long count = 0;
	y = y + date[0]; y = y + date[1]; y = y + date[2]; y = y + date[3];
	m = m + date[5]; m = m + date[6];
	d = d + date[8]; d = d + date[9];
	int yy = 0, mm = 0, dd = 0;
	yy = stoi(y); mm = stoi(m); dd = stoi(d);
	for (int i = 1971; i < yy; i++)
		count += isLeapYear(i) ? 366 : 365;

	for (int i = 0; i < mm; i++) {
		if (i == 2 && isLeapYear(yy))
			count += 1;
		count += month[i];
	}
	count += dd;
	return count;
}
int daysBetweenDates(string date1, string date2) {
	long long d1 = convert(date1);
	long long d2 = convert(date2);
	return (abs(d2 - d1));

}
int main() {
	string date1 = "2074-09-12";
	string date2 = "1983-01-08";
	cout << daysBetweenDates(date1, date2);
}