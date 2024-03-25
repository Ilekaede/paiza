#include <iostream>

using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int counter = 0;
    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;
        if (num == N)
        {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}