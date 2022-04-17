#include <iostream>

using namespace std;

int binarySearchIterative(int arr[], int l, int r, int x);
int binarySearchRecursive(int arr[], int l, int r, int x);

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    // binary search only works on a sorted array
    int searchValue = 10;
    int begin = 0;
    int end = (sizeof(arr) / sizeof(arr[0]) - 1); // last index value
    int result = binarySearchIterative(arr, begin, end, searchValue);
    cout << "Search value " << searchValue << " is at index " << result << endl;
    return 0;
}

/* source: https://www.geeksforgeeks.org/binary-search/ */

// An iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearchIterative(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearchRecursive(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearchRecursive(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearchRecursive(arr, mid + 1, r, x);
    }

    // if we reach here, then element was
    // not present
    return -1;
}