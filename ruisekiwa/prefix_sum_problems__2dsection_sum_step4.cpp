#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int A[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> A[i][j];
        }
    }
    int s[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            s[i][j] = 0;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j] + A[i][j];
        }
    }

    cout << s[c + 1][d + 1] - s[a][d + 1] - s[c + 1][b] + s[a][b] << endl;

    return 0;
}