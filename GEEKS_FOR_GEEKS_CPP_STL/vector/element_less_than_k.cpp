
// // GOOD LUCK
// //     | |      |    Ķ
// //    (         |  Ķ
// //     | |      |Ķ
// //        )     |  Ķ
// //     | |   •  |    Ķ

// // DATE: 09-12-2022
// // TIME: 22-55-00
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define REP(i, a, b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int n;
//     cin >> n;
//     vector<int> v;
//     forn(i, n)
//     {
//         int a;
//         cin >> a;
//         v.push_back(a);
//     }
//     int k;
//     cin >> k;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] < k)
//         {
//             cout << v[i] << " ";
//         }
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;
// Function that returns a vector of elements less than k
vector<int> elementsLessThanK(const vector<int> &vec, int k)
{
    vector<int> result;
    for (const auto &element : vec)
    {
        if (element < k)
        {
            result.push_back(element);
        }
    }
    return result;
}

int main()
{
    // Create a vector with some values
    std::vector<int> vec = {5, 3, 6, 1, 3};

    // Set the value of k
    int k = 4;

    // Get the vector of elements less than k
    vector<int> result = elementsLessThanK(vec, k);

    // Print out the result
    cout << "Elements in the vector that are less than " << k << ": ";
    for (const auto &element : result)
    {
        std::cout << element << " ";
    }
    cout << std::endl;

    return 0;
}
