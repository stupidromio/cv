
// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    pair<int, int> p;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        forn(i, n)
        {
            cin >> arr[i];
        }
        // // -----------------------------------------------------------------
        forn(i, n)
        {
            p.first = arr[i];
            p.second = arr[n - i - 1];
            cout << "(" << p.first << "," << p.second << ")";
        }
        cout << endl;
        // // ------------------------------------------------------------------
        // // ------------------------------------------------------------------
        // if (n % 2 != 0)
        // {
        //     forn(i, (n + 1) / 2)
        //     {
        //         p.first = arr[i];
        //         p.second = arr[n - i - 1];
        //         cout << "(" << p.first << "," << p.second << ")";
        //     }
        //     cout << endl;
        // }
        // else
        // {
        //     forn(i, (n / 2))
        //     {
        //         p.first = arr[i];
        //         p.second = arr[n - i - 1];
        //         cout << "(" << p.first << "," << p.second << ")";
        //     }
        //     cout << endl;
        // }
        // // --------------------------------------------------------------------------
    }

    return 0;
}