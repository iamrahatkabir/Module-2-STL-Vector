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

    vector<int> v = {1, 2, 3, 4, 5, 6};

    //Insert element in a specific position;
    // v.insert(v.begin()+2, 100); // [v.begint()+2] -> where u want to insert value; [100(value)] -> What value you want to insert;
   
    //Insert an array to an other array;
    vector<int> v2 = {100, 200, 300};
    v.insert(v.begin()+2, v2.begin(), v2.end());

     //Range base for loop;
    for(int x : v)
    {
        cout << x << " ";
    }

    return 0;
}