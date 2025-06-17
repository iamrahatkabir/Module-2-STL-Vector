#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> v2(n);
    vector<int> v3;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    for(int i = 0; i < n; i++)
    {
        v3.push_back(v2[i]);
    }

    for(int i = 0; i < n; i++)
    {
        v3.push_back(v[i]);
    }
    

    for(int x : v3)
    {
        cout << x << " ";
    }



    return 0;
}