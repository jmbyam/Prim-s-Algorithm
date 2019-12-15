//
//  main.cpp
//  AA_A7
//
//  Created by Joseph Byam on 12/13/19.
//  Copyright © 2019 Joseph Byam. All rights reserved.
//

#include "prims.hpp"

int main() {
    
    // {vertex,vertex,weight}
    vector<vector<int>> phase1 = {
        {1,2,2}, {1,6,4}, {1,7,3},
        {2,6,3}, {2,3,10},
        {3,4,2}, {3,7,6},
        {4,5,1}, {4,7,5},
        {5,6,5}, {5,7,3},
        {6,7,4}
    };
    
    vector<vector<int>> phase2 = {
        {1,10,3}, {1,11,1},
        {2,7,3}, {2,10,2},
        {3,6,2}, {3,11,3},
        {4,5,6}, {4,6,5}, {4,11,4},
        {5,11,2},
        {7,9,2}, {7,11,1},
        {8,9,4},
        {9,10,8},
        {10,11,4}
    };
    
    prims(phase1);
    prims(phase2);
    
    return 0;
}
