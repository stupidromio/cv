#include <iostream>
#include <vector>

using namespace std;

void ShrinkMe(vector<int> &v, int newsize)
{
    cout << "Original size: " << v.size() << endl;
    v.resize(newsize);
    cout << "Size after resize: " << v.size() << endl;
    v.shrink_to_fit();
    cout << "Size after shrink_to_fit: " << v.size() << endl;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int size, newsize;
        cin >> size >> newsize;
        vector<int> v(size);
        ShrinkMe(v, newsize);
    }

    return 0;
}
