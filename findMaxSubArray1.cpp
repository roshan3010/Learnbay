/*
Write a program to find the maximum contiguous array

1 3 -5 2 3 -1 8 6 -100

*/
#include<bits/stdc++.h>

using namespace std;

int findMaxSubArray()
{

    int globalSum = -100;
    int arr[9] = {1,3,-5,2,3,-1,8,6,-100};
    int newArr[9];
    int sumArr=0;
    int n=0;
    int count = 0;
    for (int i=0; i<9; i++) //0 1 2
    {
        sumArr += arr[i];  // 1 4 -1 2 5 4 12 18
        if(sumArr<0)
          {
            sumArr = 0; // 0
            globalSum = 0;  // 0
            n=0;
          }

        else if(globalSum<=sumArr)
        {
            globalSum=sumArr;   // 1 4 2 5 12 18
            newArr[n] = arr[i];  // {2, 3, -1, 8, 6
            count++;
            n++;                   // 0 1 2 3 4
        }
        else if(globalSum>=sumArr)
          {
            globalSum=sumArr;   // 1 4 2 5 4
            newArr[n] = arr[i];  // {2, 3, -1,
            count++;
            n++;                   // 0 1 2
        }

    }
    //int m = sizeof(newArr)/sizeof(newArr[0]);
int size = *(&newArr + 1) - newArr;
    cout<<"size = "<<size<<"\n";
    for (int j=0; j<count; j++)
        cout<<newArr[j]<<" ";

    //return globalSum;
}
int main()
{
    cout<<findMaxSubArray();
}
