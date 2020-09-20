#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char allcard[101][101] = {}, partialcard[51][51] = {};
	int r, c, a, b; 
	cin >> r >> c; 
	for(int i = 0; i < r; i++)
	{
		string temp; 
		cin >> temp; 
		for(int j = 0; j < c; j++)
			partialcard[j][i] = temp[j]; 
	}
	cin >> a >> b;
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			allcard[j][i] = partialcard[j][i]; 
			allcard[j][2 * r - i - 1] = partialcard[j][i]; 
			allcard[2 * c - j - 1][i] = partialcard[j][i];
			allcard[2 * c - j - 1][2 * r - i - 1] = partialcard[j][i]; 
		}
	}
	if(allcard[b - 1][a - 1] == '#')
		allcard[b - 1][a - 1] = '.';
	else
		allcard[b - 1][a - 1] = '#'; 
	for(int i = 0; i < 2 * r; i++)
	{
		for(int j = 0; j < 2 * c; j++)
		{
			cout << allcard[j][i]; 
		}
		cout << "\n";
	}
	return 0; 
}
