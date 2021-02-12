#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, query;
    cin >> n >> query;

    vector<vector<int>> vec(n);
    int index, position, val;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        vec[i] = vector<int>(m);

        for (int j = 0; j < m; j++)
        {
            cin >> val;
            vec[i][j] = val;
        }
    }

    while (query--)
    {
        cin >> index >> position;
        cout << vec[index][position] << endl;
    }

    return 0;
}
