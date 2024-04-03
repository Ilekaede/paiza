#include <iostream>
#include <vector>

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

    int y, x;
    cin >> y >> x;
    if (s[y][x] == '.')
    {
        s[y][x] = '#';
    }
    else if (s[y][x] == '#')
    {
        s[y][x] = '.';
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }

    return 0;
}