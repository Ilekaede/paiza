#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
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
            s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j] + a[i][j];
            // cout << s[i + 1][j + 1];
            // if (j != 4)
            // {
            //     cout << " ";
            // }
        }
        // cout << endl;
    }

    cout << s[4][4] - s[1][4] - s[4][1] + s[1][1] << endl;

    return 0;
}