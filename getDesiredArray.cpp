#include<bits/stdc++.h>
using namespace std;

int getDesiredArray(int arr[], int n)
{
	int i=0;
	
	while(1)
	{
		int maxValueObtained = 0;
		for(int j=0; j<n; j++)
		{
			if(arr[j]%2 ==1)
			{
				i++;
				arr[j] -=1;
			}
			maxValueObtained=std::max(maxValueObtained,arr[j]);
		}

		if(maxValueObtained==0)
			break;
		for(int j=0; j<n; j++)
		{
			arr[j] = arr[j]/2;
		}
		i++;
	}
	return i;
}

int main()
{
	int arr[]={2,7,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<getDesiredArray(arr,n);
}
