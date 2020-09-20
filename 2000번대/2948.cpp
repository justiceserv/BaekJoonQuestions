#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int days = 4, m, d, months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
	string weekname[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	cin >> d >> m;
	for(int i = 0; i < m; i++)
		days += months[i];
	days += d - 1; 
	days = days % 7; 
	cout << weekname[days];
	return 0;
}
