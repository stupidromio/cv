#include <iostream>
#include <unordered_set>

using namespace std;

// Function to check if two numbers in the given array have
// a sum equal to the given sum
bool sumExists(int A[], int n, int sum)
{
    // create an empty hash set
    unordered_set<int> s;

    // do for each element in the array
    for (int i = 0; i < n; i++)
    {
        // return true if the element is already present in the set
        // or sum - current element is present in the set
        if (s.find(A[i]) != s.end() ||
            s.find(sum - A[i]) != s.end())
            return true;

        // insert current element into the set
        s.insert(A[i]);
    }

    // we reach here if no pair was found
    return false;
}

int main()
{
    int T;
    cin >> T;

    // for each test case
    while (T--)
    {
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];

        int sum;
        cin >> sum;

        if (sumExists(A, n, sum))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
