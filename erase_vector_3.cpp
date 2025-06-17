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

    //Erase an element from vector;
    // v.erase(v.begin()+2);

    //Erase multiple element from vector;
    v.erase(v.begin()+1, v.begin()+5); // Erase value from 2 to 5;[Last index should be index+1] (Prints 1, 6);


    return 0;
}