#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K, P;
    cin >> N >> K >> P;
    vector<int> heights;
    int num;
    heights.push_back(P);

    for (int i = 0; i < N; i++)
    {
        int height;
        cin >> height;
        heights.push_back(height);
    }

    sort(heights.begin(), heights.end());
    for (int i = 0; i < N; i++)
    {
        if (heights[i] == P)
        {
            num = i;
        }
    }

    for (int i = 0; i < K; i++)
    {
        string event;
        cin >> event;
        if (event == "join")
        {
            int height;
            cin >> height;
            heights.push_back(height);
        }
        else if (event == "sorting")
        {
            sort(heights.begin(), heights.end());
            for (int i = num; i < heights.size(); i++)
            {
                if (heights[i] == P)
                {
                    cout << i + 1 << endl;
                    num = i;
                    break;
                }
            }
        }
    }

    return 0;
}