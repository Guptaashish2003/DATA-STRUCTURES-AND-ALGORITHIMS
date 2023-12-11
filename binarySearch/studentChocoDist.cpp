#include <iostream>
#include <vector>
using namespace std;
bool canDistChoco(vector<int> v, int mid, int s)
{
    int n = v.size();
    int studenReq = 1;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > mid)
        {
            return false;
        }
        if (currSum + v[i] > mid)
        {
            studenReq++;
            currSum = v[i];
        }
        if (studenReq > s)
            return false;
        else
        {
            currSum += v[i];
        }
    }
    return true;
}
int studentChocoDist(vector<int> v, int s)
{
    int n = v.size();
    int lo = v[0];
    int hi = 0;
    for (int i = 0; i < n; i++)
    {
        hi += v[i];
    }
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (canDistChoco(v, mid, s))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
}
int main()
{
    vector<int> v = {12, 34, 67, 90};
    int s = 2;
    cout << studentChocoDist(v, s) << "\n";
}