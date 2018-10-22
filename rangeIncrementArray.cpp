/*Given an array of length n containing all zeros. Given the ranges of index in which you need to add +1 for the given array. Find the maximum value present in the array.
Assume indexing for the array starts from 0
Example :  n = 5 
		   Ranges (2 3)
		          (1 4)
		          (0 3)
		          (1 2)

		    Answer : 4

------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;


int findMaxElemOfIndxArray(int countArr[], int queries, int n)
{	
	int st,end;
	for(int i=0; i<queries; i++)
	{
		cin>>st>>end;
		countArr[st] +=1;
		if((end+1)<n)
			countArr[end+1] -=1;
	}

	for(int i=0; i<n; i++)
		cout<<countArr[i]<<" ";

	int value=0;
	int max_so_far = -1;
	for(int i=0; i<n; i++)
	{	
		value+=countArr[i];
		max_so_far=max(value,max_so_far);
		countArr[i]=value;
	}

	return max_so_far;
}


int main()
{
	int arr[]={0,0,0,0,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	//cout<<n<<endl;
	cout<<endl<<findMaxElemOfIndxArray(arr, 4, n);
}