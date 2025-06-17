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
    vector<int> v = {1, 2, 3, 2, 5, 2};

    // replace(v.begin(), v.end(), 2, 100);
    replace(v.begin(), v.end()-1, 2, 100);
    //First & second two [v.begin(), v.end()] is the range like from here to there;
    //Third value[2] is which value you want to replace;
    //Fourth value[100] is what you want to replace with;

    for(int x : v)
    {
        cout << x << " ";
    }


    return 0;
}