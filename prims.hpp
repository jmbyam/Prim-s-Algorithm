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
      return a[2] > b[2];
    });
    
    while( graph.size() != 0 ) {
        cout << "{" << graph[graph.size()-1][0] << ", " << graph[graph.size()-1][1] << ", " << graph[graph.size()-1][2] << "}" << endl;
        
        // add first and second element to list of vertexes if they aren't already there
        vector<int> reached ={};
        if (std::find(reached.begin(), reached.end(), graph[graph.size()-1][0]) == reached.end()) {
          reached.push_back(graph[graph.size()-1][0]);
        }
        if (std::find(reached.begin(), reached.end(), graph[graph.size()-1][1]) == reached.end()) {
          reached.push_back(graph[graph.size()-1][1]);
        }
        // if a vector has a first element and second element that have both been reached, remove it.
        int counter = 0;
        for ( vector<int> edge : graph ) {
            //if ( edge.size() == 0 ) continue;
            if ( any_of(reached.begin(), reached.end(), [edge](int i){return i==edge[0];}) && any_of(reached.begin(), reached.end(), [edge](int i){return i==edge[1];}) ){
                graph.erase(graph.begin()+counter);
            }
            counter++;
        }
    }
    
}

#endif /* prims_hpp */
