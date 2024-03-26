#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_eggs = -1;
    for (int i = 0; i < n - k + 1; i++)
    {
        int eggs = 0;
        for (int j = 0; j < k; j++)
        {
            eggs += a[i + j];
        }

        if (max_eggs < eggs)
        {
            max_eggs = eggs;
        }
    }

    cout << max_eggs << endl;

    return 0;
}