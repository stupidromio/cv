
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
    int a;
    forn(i, n)
    {
        cin >> a;
        // s = s + a;
        v.push_back(a);
    }
    // int sum = 0;
    // forn(i, n)
    // {
    //     sum = sum + v[i];
    // }
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << " ";

    return 0;
}