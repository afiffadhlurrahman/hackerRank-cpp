#include <sstream>
#include <vector>
#include <iostream>

using namespace std;
int sum = 1;

vector<int> parseInts(string str)
{

    vector<int> hasil;

    stringstream ss(str);
    char ch;
    int a;

    for (int j = 0; j < sum; j++)
    {
        if (j == 0)
            ss >> a;
        else
            ss >> ch >> a;

        hasil.push_back(a);
    }
    return hasil;
}

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ',')
            sum += 1;
    }

    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    return 0;
}