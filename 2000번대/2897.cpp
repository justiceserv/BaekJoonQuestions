#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char map[50][50] = {};
	int r, c, park[5] = {0}; 
	cin >> r >> c; 
	for(int i = 0; i < r; i++)
	{
		string temp; 
		cin >> temp; 
		for(int j = 0; j < c; j++)
			map[i][j] = temp[j];
	}
	for(int i = 0; i < r - 1; i++)
	{
		for(int j = 0; j < c - 1; j++)
		{
			int brcars = 0; 
			if(map[i][j] != '#' && map[i+1][j] != '#' && map[i][j+1] != '#' && map[i+1][j+1] != '#')
			{
				if(map[i][j] == 'X')
					brcars++; 
				if(map[i+1][j] == 'X')
					brcars++; 
				if(map[i][j+1] == 'X')
					brcars++;
				if(map[i+1][j+1] == 'X')
					brcars++; 
				park[brcars]++;
			}
		}
	}
	for(int i = 0; i <= 4; i++)
		cout << park[i] << "\n";
	return 0;
}
