#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n, val;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    for (int j = 0; j < v.size(); j++)
    {
        cout << v.at(j) << " ";
    }
    return 0;
}
