#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n+1] = {}, pre_sum[n+1] = {};
    for(int i = 1; i <= n; i++) 
    {
        cin >> arr[i];
        pre_sum[i] = arr[i] + pre_sum[i-1]; 
    }

    int shortest_time = pre_sum[n];

    int t_num; cin >> t_num;
    pair<int, int> tunnels[t_num];
    for(int i = 0; i < t_num; i++)
    {
        cin >> tunnels[i].first >> tunnels[i].second;
        int time = pre_sum[n] - (pre_sum[tunnels[i].second] - pre_sum[tunnels[i].first - 1]); // take the tunnel
        shortest_time = min(time, shortest_time);
    }

    cout << shortest_time;
}