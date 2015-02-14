#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long fibo_mod(long long a, long long b, int count)
{
	int len = 3;
	long long x = 0;
	while (len <= count){
		x = (b*b) + a;
		a = b;
		b = x;
		len++;
	}
	return (x);
}

int main() {
	long long a, b;
	int n;
	cin >> a >> b >> n;
	long long fin = fibo_mod(a, b, n);
	cout << fin << "\n";
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}
