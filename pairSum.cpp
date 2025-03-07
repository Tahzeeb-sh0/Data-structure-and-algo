#include <iostream>
#include <vector>
using namespace std;

vector<int> ans(vector<int> vec, int target ,int targetValue)
{
    vector<int> result;
    int nu = vec.size();
    for (int i = 0; i < nu; i++)
    {
        for (int j = i + 1; j < nu; j++)
        {
            target = vec[i] + vec[j];
            if (target == targetValue)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}
int main()
{

    vector<int> vec = {2, 7, 11, 15,2,3,4,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int targetValue = 39;
    int target = targetValue;

    vector<int> result = ans(vec, target ,targetValue);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}