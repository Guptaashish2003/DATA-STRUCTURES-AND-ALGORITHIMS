#include <iostream>
#include <deque>
using namespace std;
void minSlidWindow(int arr[], int n, int k)
{
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }
    }
    for (int i = k; i < n; i++)
    {
        if (dq.empty())
            cout << 0 << " ";
        else
            cout << arr[dq.front()] << " ";
        while (i - dq.front() >= k && !dq.empty())
        {
            dq.pop_front();
        }
        if (arr[i] < 0) dq.push_back(i);
        
    }
       if (dq.empty())
            cout << 0 << " ";
        else
            cout << arr[dq.front()] << " ";
}
int main()
{
    int size = 9;
    int arr[size] = {12, -1, -7, 8, -15, 30, 16, 28,9};
    minSlidWindow(arr, size, 3);

    return 0;
}