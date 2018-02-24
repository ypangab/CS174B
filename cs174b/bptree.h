//
//  bptree.hpp
//  cs174b
//
//  Created by Pang Yuting on 2/22/18.
//  Copyright © 2018 Pang Yuting. All rights reserved.
//

#ifndef bptree_hpp
#define bptree_hpp

#include <stdio.h>
#include "node.h"

class bptree{
    
private:
    //node

public:
    void load();
    void insert_doc();
    void delete_doc();
    int count();
    int search(); //need varification
    int printpath();
    void range (char* k1, char*  k2);//: Range query. Print all of the keywords between keyword1 and keyword2where keyword1 < keyword2

    
    
};



#endif /* bptree_hpp */
