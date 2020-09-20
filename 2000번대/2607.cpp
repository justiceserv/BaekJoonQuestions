#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	string temp;
	int n, alphabet[200][100] = {0}, needa[200] = {0}, all = 0; 
	cin >> n; 
	cin >> temp;
	for(int i = 0; i < temp.size(); i++)
	{
		needa[temp[i]]++; 
	} 
	for(int i = 0; i < n - 1; i++)
	{
		cin >> temp;
		for(int j = 0; j < temp.size(); j++)
		{
			alphabet[temp[j]][i]++; 
		}
	} 
	for(int i = 0; i < n - 1; i++)
	{
		int change = 0, isSwap = 0, a = 0;
		for(int j = 'A'; j <= 'Z'; j++)
		{
			if(alphabet[j][i] != needa[j])
			{
				isSwap++; 
				a += alphabet[j][i] - needa[j];
				change += abs(alphabet[j][i] - needa[j]);
			}
		}
		if(change <= 1 || (isSwap == 2 && change == 2 && a == 0))
		{
			all++;
		}
	}
	cout << all;
	return 0; 
}

