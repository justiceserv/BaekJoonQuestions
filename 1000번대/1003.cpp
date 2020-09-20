#include <stdio.h>

int fb[41];

int fibonacci(int n) {
    if (n <= 0) {
        fb[0] = 0;
        return 0;
    } else if (n == 1) {
        fb[1] = 1;
        return 1;
    }
    if(fb[n] != 0)
    {
    	return fb[n];
	}
	else
	{
		return fb[n] = fibonacci(n-1) + fibonacci(n-2);
	}
}
int main()
{
	int x;
	int t;
	scanf("%d", &t);
	while(t --> 0)
	{ 
		scanf("%d", &x);
		if(x == 0)
		{
			printf("%d %d\n", 1, 0);
		}
		else if(x == 1)
		{
			printf("%d %d\n", 0, 1);
		}
		else
		{
			fibonacci(x);
			printf("%d %d\n", fb[x-1], fb[x]);
		}
	}
	return 0;
}
