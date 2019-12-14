//
//  prims.hpp
//  AA_A7
//
//  Created by Joseph Byam on 12/13/19.
//  Copyright © 2019 Joseph Byam. All rights reserved.
//

#ifndef prims_hpp
#define prims_hpp

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <queue>
using std::priority_queue;

struct my_comparator
{
    bool operator()(std::vector<int> const& a, std::vector<int> const& b) const
    {
        return a[2] > b[2];
    }
};


using my_priority_queue = priority_queue<std::vector<int>, std::vector<std::vector<int>>, my_comparator>;

void prims( vector<vector<int>> graph ) {
    
    cout << "The minimum spanning tree of the given graph is..." << endl;
    
    my_priority_queue min;
    for ( auto edge : graph ) {
        min.push(edge);
    }
    
    while( min.size() != 0 ) {
        cout << "{" << min.top().at(0) << ", " << min.top().at(1) << ", " << "}" << endl;
        int kill = min.top().at(0);
        // go through min and remove all the edges that have the same starting value as the one you display
        for ( auto edge : min ) {
            if ( edge[0] == kill )
                // remove edge some how
        }
    }
    
}

#endif /* prims_hpp */
