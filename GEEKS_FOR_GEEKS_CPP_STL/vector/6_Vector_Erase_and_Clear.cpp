// #include <iostream>
// #include <vector>
// #define forn(i, n) for (int i = 0; i < n; i++)

// using namespace std;

// vector<int> v = {2, 3, 4, 5, 6};

// void clearAll()
// {
//     v.clear();
// }

// void eraseAt(int pos)
// {
//     v.erase(v.begin() + pos);
// }

// void eraseInRange(int start, int end)
// {
//     v.erase(v.begin() + start, v.begin() + end);
// }

// int main()
// {

//     cout << "Original vector: ";
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     eraseAt(2);
//     cout << "Vector after removing element at position 2: ";
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     eraseInRange(1, 3);
//     cout << "Vector after removing elements in range 1 to 3: ";
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     clearAll();
//     cout << "Vector after removing all elements: ";
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }
// =======================================================================

#include <iostream>
#include <vector>
#define forn(i, n) for (int i = 0; i < n; i++)

using namespace std;

vector<int> v = {2, 3, 4, 5, 6};

int main()
{

    cout << "Original vector: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    int pos;
    cin >> pos;
    v.erase(v.begin() + pos);

    cout << "Vector after removing element at position " << pos << " :";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    int start, end;
    cin >> start >> end;
    v.erase(v.begin() + start, v.begin() + end);

    cout << "Vector after removing elements in range " << start << " to " << end << " :";
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;
    v.clear();

    cout << "Vector after removing all elements: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    if (v.empty() == true)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }

    return 0;
}