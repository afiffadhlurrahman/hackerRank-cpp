#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> s;
    int n, query, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> query >> val;
        if (query == 1)
        {
            s.insert(val);
        }
        else if (query == 2)
        {
            s.erase(val);
        }
        else if (query == 3)
        {
            if (s.find(val) != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
