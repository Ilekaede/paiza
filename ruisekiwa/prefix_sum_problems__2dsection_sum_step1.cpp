#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int vec[5][5] = {{1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}, {4, 5, 6, 7, 8}, {5, 6, 7, 8, 9}};
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
            s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j] + vec[i][j];
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