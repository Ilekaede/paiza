#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a[10] = {1, 5, 9, 7, 5, 3, 2, 5, 8, 4};
    vector<int> s(11);
    s[0] = 0;
    s[1] = a[0];
    for (int i = 1; i < 10; i++)
    {
        s[i + 1] = s[i] + a[i];
    }

    cout << s[8] - s[2] << endl;
    return 0;
}