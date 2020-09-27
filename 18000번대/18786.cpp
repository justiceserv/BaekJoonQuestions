#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, x[1001] = {}, y[1001] = {}; 
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i]; 
	}
	int ans = 0, max = -1; 
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			for(int k = 0; k < n; k++)
			{
				if(y[i] == y[j] && x[i] == x[k])
					ans = (x[j] - x[i]) * (y[k] - y[i]);
				if(ans < 0)
					ans *= -1;
				if(ans > max)
					max = ans; 
			}
		}
	}
	cout << max;
	return 0; 
}
