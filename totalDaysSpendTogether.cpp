#include<bits/stdc++.h>
using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int convert(string &date)
{
	string m, d;
	int count = 0;
	m += date[0]; m += date[1];
	d += date[3]; d += date[4];
	int mm = 0, dd = 0;
	mm = stoi(m);
	dd = stoi(d);
	for (int i = 0; i < mm; i++)
		count += month[i];

	count += dd;
	return count;
}
int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
	int aA = convert(arriveAlice);
	int aB = convert(arriveBob);
	int lA = convert(leaveAlice);
	int lB = convert(leaveBob);
	int d1, d2;
	d1 = max(aA, aB);
	d2 = min(lA, lB);

	if (d1 > d2) return 0;
	return (abs(d1 - d2)) + 1;

}
int main() {
	string arriveAlice = "08-15", leaveAlice = "08-18", arriveBob = "08-16", leaveBob = "08-19";
	cout << countDaysTogether(arriveAlice, leaveAlice, arriveBob, leaveBob);
}