#include <bits/stdc++.h>
using namespace std;

int binary_search_first(int arr[], int l, int r, int x)
{
    int fo=INT_MIN;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            fo=mid;
            r=mid-1;
        }
            

        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (fo>INT_MIN)
    {
        return fo;
    }
    else
    {
    return -1;
    }
    
}

int binary_search_last(int arr[], int l, int r, int x)
{
    int lo=INT_MAX;
    int s=10;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            lo=mid;
            l=mid+1;
        }
            

        if (arr[mid] <= x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (lo<INT_MAX)
    {
        return lo;
    }
    else
    {
    return -1;
    }
    
}




int main()
{
    const int m = 10;
    int arr[m],first,last, x;
    cout << "Enter array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number to find in list" << endl;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);

    first=binary_search_first(arr, 0, n - 1, x);
    last=binary_search_last(arr, 0, n - 1, x);

    if (first == -1 && last == -1)
    {
        cout << "Element is not present in array";
    }
    else
    {
        cout << "Element first occurance is at " << first << " postion and last occurance is at "<< last<<endl;
    }


    

    
    return 0;
}