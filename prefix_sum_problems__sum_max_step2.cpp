#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    vector<int> s(11);
    s[0] = 0;
    s[1] = a[0];
    for (int i = 1; i < 10; i++)
    {
        s[i + 1] = s[i] + a[i];
    }

    int max = -1;
    for (int i = 0; i <= 7; i++)
    {
        int n = s[i + 3] - s[i];
        if (n > max)
        {
            max = n;
        }
    }

    cout << max << endl;
    return 0;
}