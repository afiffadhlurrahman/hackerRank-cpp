#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstStr, secondStr;

    cin >> firstStr >> secondStr;
    int len1 = firstStr.size();
    int len2 = secondStr.size();
    cout << len1 << " " << len2 << endl;

    string result2 = firstStr;
    string conc = result2.append(secondStr);
    cout << conc << endl;

    char temp;
    temp = firstStr[0];
    firstStr[0] = secondStr[0];
    secondStr[0] = temp;

    cout << firstStr << " " << secondStr << endl;
    // cout << "Your name is: " << firstStr;

    return 0;
}