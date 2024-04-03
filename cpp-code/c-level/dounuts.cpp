#include <iostream>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    char s[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> s[i][j];
        }
    }

    char neighbor[8];
    int cnt = 0;
    bool flag = true;
    for (int i = 1; i < H - 1; i++)
    {
        for (int j = 1; j < W - 1; j++)
        {
            flag = true;
            if (s[i][j] == '#')
            {
                continue;
            }

            neighbor[0] = s[i - 1][j - 1];
            neighbor[1] = s[i - 1][j];
            neighbor[2] = s[i - 1][j + 1];
            neighbor[3] = s[i][j - 1];
            neighbor[4] = s[i][j + 1];
            neighbor[5] = s[i + 1][j - 1];
            neighbor[6] = s[i + 1][j];
            neighbor[7] = s[i + 1][j + 1];

            for (int k = 0; k < 8; k++)
            {
                if (neighbor[k] == '.')
                {
                    flag = false;
                }
            }

            if (flag)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}