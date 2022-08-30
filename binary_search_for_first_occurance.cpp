#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l, int r, int x)
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

int main()
{
    const int m = 15;
    int arr[m], x;
    cout << "Enter array"<< endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number to find in list"<< endl;
    cin >> x;

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binary_search(arr, 0, n - 1, x);

    if (result == -1)
    {
        cout << "Element is not present in array";
    }
    else
    {
        cout << "Element is at " << result << " postion";
    }

    return 0;
}