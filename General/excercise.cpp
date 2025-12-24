#include <iostream>
using namespace std;

int main()
{
    int fav_count = 9;
    int favorites[] = {1, 3, -1, 0, 7, -1, 8, -1, -1};
    
    for (int l  = 0, r = fav_count-1; l < r; l++)
    {
        
        while (l < r && favorites[r] == -1)
            r--;
        
        if (favorites[l] == -1)
        {
            favorites[l] = favorites[r];
            favorites[r] = -1;
            r--;
        }
    }
    
    int deleted = 0;
    for(int i = fav_count-1; i > 0; i--)
    {
        if(favorites[i] != -1) break;
        else deleted++;
    }
    fav_count -= deleted;

    cout << fav_count << endl;
    for(int i = 0; i < fav_count; i++)
        cout << favorites[i] << " ";
    
    return 0;
}
