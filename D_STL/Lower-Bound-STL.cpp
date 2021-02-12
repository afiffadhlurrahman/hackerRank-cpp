#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    vector<int>::iterator lower;
    int n,m,val,num;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }
    
    cin >> m;
    for(int j = 0; j < m; j++){
        cin >> num;
        lower = lower_bound(v.begin(), v.end(), num);
        if (binary_search(v.begin(), v.end(), num))
            cout << "Yes " << (lower - v.begin() + 1) << '\n';
        else
            cout << "No " << (lower - v.begin() + 1) << '\n';
    }
    
    
    return 0;
}
