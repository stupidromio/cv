
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
#define REP(i, a, b) for (int i = a; i < b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    forn(i, n)
    {
        int a;
        cin >> a;
        // v.push_back(a);
        v.push_back(a);
    }
    REP(i, 0, v.size())
    {
        cout << v[i] << " ";
    }
    // --------------------------------------------------------------------------------
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // -----------------------------------------------------------------------------
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }
    // -----------------------------------------------------------------------------

    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // -------------------------------------------------------------------------
    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // ------------------------------------------------------------------------------

    return 0;
}