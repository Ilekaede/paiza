#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        a.push_back(m);
    }

    int k;
    cin >> k;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}