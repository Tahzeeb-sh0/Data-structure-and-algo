#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int maxsum = INT_MIN, currsum = 0;

    vector<int> arr = {-3, -4, -5, -4, -1, -7, -8, -3, -5, -6, -1, -2};

    for (int i = 0; i < arr.size(); i++)
    {
        currsum += arr[i];
        maxsum = max(maxsum, currsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << maxsum << endl;

    return 0;
}