#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i,key,j;
    for (int i = 0; i < n; i++)
    {
        key=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1]==arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    
}

int main()
{
    int n;
    cin >> n;
    int arr[10];
    for(int i=0; i<n;i++)
    {
        cin>> arr[i];
    }

    return 0;
}