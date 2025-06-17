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
    vector<int> v;

    bool is_empty = v.empty();

    cout << is_empty << endl;

    int a[5] = {1, 2 , 3, 4, 5};
    vector<int> v2(a, a+5); 

    cout << v2.empty() << endl;

    return 0;
}