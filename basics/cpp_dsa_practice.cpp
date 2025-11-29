#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {6, 4, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0, maxsum = 0;

    for (int i = 0; i < len; i++)
    {

        if (sum < 0)
        {
            sum = 0;
        }

        maxsum = max(maxsum, sum);
        cout << maxsum;
    }

    return 0;
}