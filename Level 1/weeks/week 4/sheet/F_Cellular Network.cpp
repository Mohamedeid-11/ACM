#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int n, m; 
int cities[(int)1e5+1], towers[(int)1e5+1];
int closest_tower_dist(int city); // return the distance between "city" and its closest tower

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++) cin >> cities[i];
    for(int i=0;i<m;i++) cin >> towers[i];

    int max_dist = 0; // maximum r between all cities
    for(int i = 0; i < n; i++)
    {
        max_dist = max(max_dist, closest_tower_dist(cities[i]));
    }

    cout << max_dist;
}

int closest_tower_dist(int city)
{
    // all towers are on the right/left of the city
    if (city <= towers[0]) return abs(city-towers[0]);
    if (city >= towers[m-1]) return abs(city-towers[m-1]);

    // city between towers
    int left = 0, rigth = m-1, mid, min_dist = 1e9; 
    while(left <= rigth)
    {
        mid = (left+rigth)/2;
        
        min_dist = min(min_dist, abs(city-towers[mid])); // check if this is the closest tower
        
        if(towers[mid] > city) rigth = mid-1;
        else if(towers[mid] <= city) left = mid+1;
    }

    return min_dist;
}