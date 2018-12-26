
#include<iostream> 
using namespace std;
int fib(int n)
{
	
	int f[n + 2]; 
	int i;

	
	f[0] = 0;
	f[1] = 1;

	for (i = 2; i <= n; i++)
	{
		
		f[i] = (f[i - 1] + f[i - 2])%10;
	}

	return f[n];
}

int main()
{

	unsigned long long n;
	unsigned long long a;
	unsigned long long b;
	cin>>n;
	a=(fib(n));
	cout<<a;
	return 0;
	
}


