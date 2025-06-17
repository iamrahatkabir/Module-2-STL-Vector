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

    // vector<int> :: iterator it = find(v.begin(), v.end(), 100);
    auto it = find(v.begin(), v.end(), 5); //iterator(it) is a pointer; dereference it while printing;
     
    //First & second two [v.begin(), v.end()] are the range like from here to there;
    //Third value is what you are finding;


    // if(it == v.end()) //Jodi iterator(it) v.end() porjonto chole jay;
    // {
    //     cout << "Not found" << endl;
    // }
    // else{
    //     cout << "Found" << endl;
    // }

    cout << *it << endl;


    return 0;
}