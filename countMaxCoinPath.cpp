// countMaxCoinPath
#include<bits/stdc++.h>
using namespace std;

int countMaxCoinPath(int arr[][4], int n, int m)
{
	int dp[4][4];
	dp[0][0] = arr[0][0];
	int countPath[4][4];

	for(int i=1; i<n; i++)
		dp[i][0]=dp[i-1][0]+arr[i][0];

	for(int j=1; j<m; j++)
		dp[0][j]=dp[0][j-1]+arr[0][j];

	for(int i=1; i<n; i++)
	{
		for(int j=1; j<m; j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]) + arr[i][j];
		}
	}

	return dp[n-1][m-1];
}

int main()
{
	int arr[][4]={{1,2,1,1},{0,0,1,1},{4,0,0,2},{1,1,1,1}};
	cout<<countMaxCoinPath(arr,4,4);
}a
