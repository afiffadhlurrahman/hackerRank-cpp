#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n, val, num, sum;
    map<string, int> m;
    string str;
    map<string, int>::iterator it1;

    cin >> n;
    while (n--)
    {
        cin >> val;
        if (val == 1)
        {
            cin >> str >> num;
            m[str] += num;
        }
        else if (val == 2)
        {
            cin >> str;
            m.erase(str);
        }
        else if (val == 3)
        {
            cin >> str;
            it1 = m.find(str);

            if (it1 == m.end())
            {
                cout << "0" << endl;
            }
            else
            {
                cout << m[str] << endl;
            }
        }
    }
    return 0;
}
