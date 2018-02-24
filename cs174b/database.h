//
//  database.hpp
//  cs174b
//
//  Created by Pang Yuting on 2/22/18.
//  Copyright © 2018 Pang Yuting. All rights reserved.
//
#include "bptree.h"

class database{
    
private:
    bptree bpt;
    
    
public:
    void load();
    void insert_doc();
    void delete_doc();
    int count();
    int search(); //need varification
    int printpath();
    void range (char* k1, char*  k2);//: Range query. Print all of the keywords between keyword1 and keyword2where keyword1 < keyword2
    
    
};
