// #include <bits/stdc++.h>
// using namespace std;

// // a utility function to compare two pairs by their second element
// bool compare(pair<int, int> a, pair<int, int> b) {
//     if (a.second == b.second) {
//         // if the second element is equal, sort by the first element
//         return a.first > b.first;
//     }
//     // otherwise, sort by the second element
//     return a.second > b.second;
// }

// // the main function that takes in a vector of pairs and sorts it
// vector<pair<int, int>> sortBySec(vector<pair<int, int>> v) {
//     sort(v.begin(), v.end(), compare);
//     return v;
// }

// int main() {
//     // example usage of the sortBySec function
//     vector<pair<int, int>> v = {{1, 4}, {2, 4}};
//     v = sortBySec(v);

//     // print the sorted vector
//     for (auto p : v) {
//         cout << "(" << p.first << ", " << p.second << ")" << " ";
//     }
//     cout << endl;

//     return 0;
// }
// // ========================================================================
#include <bits/stdc++.h>
using namespace std;

// This function returns true if the second item of pair a is greater than the second item of pair b
// If the second items are equal, it returns true if the first item of pair a is less than the first item of pair b
bool comparePairs(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second > b.second)
    {
        return true;
    }
    else if (a.second == b.second)
    {
        return a.first < b.first;
    }
    else
    {
        return false;
    }
}

// This function sorts the given vector of pairs in descending order by the second item of the pair
// If the second items are equal, it sorts by the first element
void sortBySec(vector<pair<int, int>> &v)
{
    sort(v.begin(), v.end(), comparePairs);
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        std::cin >> N;

        vector<pair<int, int>> v;
        for (int j = 0; j < N; j++)
        {
            int age, height;
            std::cin >> age >> height;
            v.emplace_back(age, height);
        }

        sortBySec(v);

        for (const auto &p : v)
        {
            std::cout << "(" << p.first << "," << p.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
