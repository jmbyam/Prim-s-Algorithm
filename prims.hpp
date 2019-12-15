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
#include <algorithm>
using std::any_of;


void prims( vector<vector<int>> graph ) {
    
    cout << "The minimum spanning tree of the given graph is..." << endl;
    
    std::sort(graph.begin(), graph.end(),
              [](const std::vector<int>& a, const std::vector<int>& b) {
      return a[2] < b[2];
    });
    
    vector<int> reached ={};
    while( !graph.empty() ) {
        cout << "{" << graph[0][0] << ", " << graph[0][1] << ", " << graph[0][2] << "}" << endl;
        
        // add first and second element to list of vertexes if they aren't already there
        if (std::find(reached.begin(), reached.end(), graph[0][0]) == reached.end()) {
          reached.push_back(graph[0][0]);
        }
        if (std::find(reached.begin(), reached.end(), graph[0][1]) == reached.end()) {
          reached.push_back(graph[0][1]);
        }
        // if a vector has a first element and second element that have both been reached, remove it.
        for ( int i = 0; i < graph.size(); ++i ) {
            if ( graph[i].empty() ) continue;
            if ( any_of(reached.begin(), reached.end(), [i, graph](int x){return x==graph[i][0];}) && any_of(reached.begin(), reached.end(), [i, graph](int x){return x==graph[i][1];}) ){
                graph.erase(graph.begin()+i);
                i = -1;
            }
        }
    }
    
}

#endif /* prims_hpp */
