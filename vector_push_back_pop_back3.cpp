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

    // Add or Remove an element
    v.pop_back(); // Deletes an element from back;
    v.push_back(10); //Adds an element in the back;

    //Range base for loop;
    for(int x : v)
    {
        cout << x << " ";
    }



    return 0;
}