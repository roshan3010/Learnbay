/*
1  2  3  4

2  1  4  5

2  4  3  1

2  0  5  2

find the maximum number of gold coins at the end of the array
*/
#include<iostream>
using namespace std;

int maxGoldCoins()
{
	//int Arr[4][4] = {{1,2,3,4},{0,2,1,3},{1,2,1,0},{0,2,1,3}};
	int Arr[4][4] = {{1,2,1,1},{0,0,1,1},{4,0,0,2},{1,1,1,1}};
	int n=4;
	int dp[4][4];
	dp[0][0]= Arr[0][0];
	for(int i=1; i<n; i++)
	{
		dp[i][0] = dp[i-1][0] + Arr[i][0];
	}

	for(int i=1; i<n; i++)
	{
		dp[0][i]= dp[0][i-1] + Arr[0][i];
	}

	for(int i=1; i<n; i++)
	{
		for(int j =1; j<n; j++)
		{
			dp[i][j] = Arr[i][j] + std::max(dp[i-1][j],Arr[i][j-1]);
		}
	}
	return dp[n-1][n-1];
}

int main()
{
	cout<<maxGoldCoins();
}


