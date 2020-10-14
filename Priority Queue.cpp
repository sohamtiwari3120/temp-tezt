#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

priority_queue<int>pq;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    for(int i = 0; i < N; i++)
    {
        int inp;
        cin>>inp;
        pq.push(inp);
    }

    //printing the priority queue

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}