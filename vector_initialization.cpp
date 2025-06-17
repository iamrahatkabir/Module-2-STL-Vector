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
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; //type 1;
    
    // vector<int> v(10); //type 2; //Vector integer of 10 size;

    // vector<int> v(10, -2); //type 3; //Vector of 10 size and all the values ar -2;
    // vector<int> v2(v); //type 4; //This vector v2 will copy all the elements of vector v1 and will provide the same value as vector v provides;


    int a[5] = {1, 2 , 3, 4, 5};
    vector<int> v(a, a+5); //type 5 //This vector will copy all the elements from array a; jus needs arrays starting point and ending point;

    // vector<int> v = {1, 2, 3, 4, 5}; //type 6; //vector with default value like array @37 no line;

    for(int i = 0; i < v.size(); i++) 
    {
        // cout << v[i] << " ";
        cout << v[i] << " ";
    }

    return 0;
}