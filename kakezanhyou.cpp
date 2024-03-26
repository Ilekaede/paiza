#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        int m;
        cin >> m;
        A[i] = m;
    }

    int B[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            B[i][j] = A[i] * A[j];
            cout << B[i][j];
            if (j != N - 1)
            {
                cout << " ";
                continue;
            }
            cout << endl;
        }
    }

    return 0;
}