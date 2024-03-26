#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int x, j; // 配列番号
    for (int i = 1; i <= n - 1; i++)
    {
        x = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = x;

        for (int i = 0; i < n; i++)
        {
            cout << A[i];
            if (i != n - 1)
            {
                cout << " ";
                continue;
            }

            cout << endl;
        }
    }

    return 0;
}