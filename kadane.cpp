//maximum continuous array sum

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#define rep(i, start, end) for (int i = start; i < end; i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int temp;
    rep(j, 0, n)
    {
        cin >> temp;
        a.push_back(temp);
    }
    int max_so_far = 0, max_ending_here = 0;

    rep(i, 0, n)
    {

        max_ending_here += a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    cout << max_so_far;
}