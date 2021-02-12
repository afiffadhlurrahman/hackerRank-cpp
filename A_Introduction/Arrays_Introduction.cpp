#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d ",arr[i]);
    }

    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}