#include<iostream>
using namespace std;
int GCD(int A, int B)
{
	int diff;
	if (A>B)
		diff = (A-B);
	else
		diff = (B-A);

	if (A%diff ==0 and B%diff==0)
		return diff;
	else 
		return GCD(B, diff);
}

int main()
{
	cout<<GCD(32,40);
}