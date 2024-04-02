#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int N;
    cin >> N;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int A[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }
    int s[N + 1][N + 1];
    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            s[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j] + A[i][j];
        }
    }

    cout << s[c + 1][d + 1] - s[a][d + 1] - s[c + 1][b] + s[a][b] << endl;

    return 0;
}