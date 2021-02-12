#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n, val, pos, erase1, erase2;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    cin >> pos;
    v.erase(v.begin() + pos - 1);

    cin >> erase1 >> erase2;
    v.erase(v.begin() + erase1 - 1, v.begin() + erase2 - 1);

    cout << v.size() << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v.at(j) << " ";
    }

    return 0;
}
