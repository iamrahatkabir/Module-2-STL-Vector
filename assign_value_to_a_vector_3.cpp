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

    //Assign value to a Vector; 
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2;

    v2 = v; //Assigning value of V to v2;

    // for(int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    //Range base for loop;
    for(int x : v)
    {
        cout << x << " ";
    }


    return 0;
}