#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n, score[2][100] = {0}, timeline[2][2881] = {0}, time[2] = {0}; 
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int min, sec, team; 
		scanf("%d %d:%d", &team, &min, &sec); 
		timeline[team - 1][min * 60 + sec]++; 
	}
	for(int i = 0; i < 2; i++)
	{
		int currscore = 0; 
		for(int j = 0; j < 2880; j++)
		{
			timeline[i][j] += currscore; 
			if(timeline[i][j] != 0)
				currscore = timeline[i][j];
		}
	}
	for(int i = 0; i < 2880; i++)
	{
		if(timeline[0][i] > timeline[1][i])
			time[0]++; 
		else if(timeline[1][i] > timeline[0][i])
			time[1]++; 
	} 
	printf("%02d:%02d\n", time[0]/60, time[0]%60); 
	printf("%02d:%02d\n", time[1]/60, time[1]%60); 
	return 0; 
}
