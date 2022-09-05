// https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d
// Kadane's Algo [V.V.V.V.V IMP]
// similar problem == https://practice.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1

// arr: input array
// n: size of array
// Function to find the sum of contiguous subarray with maximum sum.
long long maxSubarraySum(int arr[], int n)
{

    // Your code here
    int max_sum = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max(arr[i], arr[i] + sum);
        if (sum > max_sum)
        {
            max_sum = sum;
        }
    }
    return max_sum;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int result = maxSubarraySum(arr,n);

    return 0;
}