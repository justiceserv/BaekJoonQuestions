#include<iostream>
using namespace std;

int main()
{
	int n, height[1001] = {}, diff[1000] = {}, max = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> height[i]; 
	}
	for(int i = 1; i < n; i++)
	{
		diff[i - 1] = height[i] - height[i - 1]; 
	}
	int temp = 0; 
	for(int i = 0; i < n; i++)
	{
		if(diff[i] > 0)
			temp += diff[i];
		else if(diff[i] <= 0)
		{
			if(max < temp)
			{
				max = temp;
				temp = 0;
			} 
			else
			{
				temp = 0; 
			}
		}
	}
	if(max < temp)
		max = temp; 
	cout << max; 
	return 0; 
}
