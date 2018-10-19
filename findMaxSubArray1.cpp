/*
Write a program to find the maximum contigous array

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
    for (int i=0; i<9; i++)
    {
        sumArr += arr[i];  // 1 4 -1
        if(sumArr<0)
          {
            sumArr = 0;
            globalSum = sumArr;  // 0
            int j=0;
            while(j<=n){
                newArr[j]=0;
                j++;
            }
          }

        if(globalSum<sumArr)
        {
            globalSum=sumArr;   // 1 4
            newArr[n] = arr[i];  // {1,3,
            n++;                   // 0 1
        }

    }

    int size = *(&newArr + 1) - newArr;
    cout<<"size = "<<size<<"\n";
    for (int i=0; i<size; i++)
        cout<<newArr[i]<<" ";
}
int main()
{
    findMaxSubArray();
}
