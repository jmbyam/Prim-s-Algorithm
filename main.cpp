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
    
    prims(phase1);
    
    return 0;
}
