#include <iostream>
#include <vector>
#include <utility>

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

    for (int i = 0; i <= n - 2; i++)
    {
        int min_index = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (A[j] < A[min_index])
            {
                min_index = j;
            }
        }
        swap(A[i], A[min_index]);

        for (int j = 0; j < n; j++)
        {
            cout << A[j];
            if (j != n - 1)
            {
                cout << " ";
                continue;
            }

            cout << endl;
        }
    }

    return 0;
}