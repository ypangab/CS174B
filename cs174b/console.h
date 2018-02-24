//
//  console.hpp
//  cs174b
//
//  Created by Pang Yuting on 2/22/18.
//  Copyright © 2018 Pang Yuting. All rights reserved.
//

#include "database.h"
#include "time.h"

class console{
    
private:
    int num_of_pages;
    database dbs;
    
public:
    void load ();//: Loads a B+ index.
    void merge ();//: Merge the current index file with the second index file, and update the index file on the disk.
    
    void page(int i);//: Displays the contents of the ith page
    
    
};
