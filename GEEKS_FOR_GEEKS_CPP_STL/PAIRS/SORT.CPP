// Program to implement sort an array
// according to another array

#include <bits/stdc++.h>
using namespace std;

// Function to sort the elements of array b[]
// according to the elements of array a[]
void pairSort(int a[], char b[], int n)
{
    // Create an array of pairs
    pair<int, char> arr_p[n];
    // pair<int, int> arr_p[n];

    // Fill the array of pairs such that
    // first element of pair is the elements of a[]
    // second element of pair is the corresponding
    // element of array b[]
    for (int i = 0; i < n; i++)
    {
        // arr_p[i].first = a[i];
        // arr_p[i].second = b[i];
        arr_p[i] = {a[i], b[i]};
    }

    // Sort the array of pairs
    // By default, the sort function sorts a
    // container by first element
    sort(arr_p, arr_p + n);

    // for (int i = 0; i < n; i++)
    // {
    //     b[i] = arr_p[i].second;
    // }

    // Print the elements of pairs
    for (int i = 0; i < n; i++)
    {
        cout << arr_p[i].second << " ";
        // cout << (char)arr_p[i].second << " ";
        // cout << "(" << arr_p[i].first << ", " << arr_p[i].second << ") ";
        // cout << "(" << arr_p[i].first << ", " << (char)arr_p[i].second << ") ";
    }
}

// Driver Code
int main()
{
    // Inputs
    int a[] = {4, 1, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    char b[] = {'A', 'X', 'B', 'Y'};

    pairSort(a, b, n);

    return 0;
}
