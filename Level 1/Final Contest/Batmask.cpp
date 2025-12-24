#include <bits/stdc++.h>
using namespace std;

// function that calcultaes 2^n
long long p2(long long n)
{
    long long res = 2;
    for (long long i = 1; i < n; i++)
        res *= 2;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, n2 = 0;
    long long w;
    cin >> n >> w;

    /*Handling Large N (N > 60):
      Because 2^𝑁 grows extremely fast (and since 𝑊 is at most 10^18), the code caps N at 61 when 𝑁>60.
      The extra boxes (with indices 61 and above) are read into a separate array (cost2).*/
    bool huge = false;
    if (n > 60)
    {
        huge = true;
        n2 = max(0, n - 61);

        n = 61;
    }

    int cost[n] = {};
    for (int i = 0; i < n; i++)
        cin >> cost[i];

    int cost2[n2];
    for (int i = 0; i < n2; i++)
        cin >> cost2[i];

    /*Early Impossibility Check:
    For non-huge cases, it checks if the maximum possible weapons (i.e. 2^𝑛−1) is less than 𝑊.
    If so, it prints −1*/
    if (!huge && p2(n) - 1 < w)
    {
        cout << -1 << endl;
        return 0;
    }

    long long ans = -1, oblig_cost = 0, weight;
    if (huge)
        ans = *min_element(cost2, cost2 + n2);

    weight = p2(n - 1);
    for (int i = n - 1; i >= 0; i--)
    {
        if ((w & weight) == weight)
        {
            oblig_cost += cost[i];
            w -= weight;
        }
        else if (ans == -1 || oblig_cost + cost[i] < ans)
            ans = oblig_cost + cost[i];

        weight /= 2LL;
    }

    if (ans == -1 || oblig_cost < ans)
        ans = oblig_cost;

    cout << ans << endl;
}