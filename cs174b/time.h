//
//  time.hpp
//  cs174b
//
//  Created by Pang Yuting on 2/22/18.
//  Copyright © 2018 Pang Yuting. All rights reserved.
//

#ifndef time_hpp
#define time_hpp

#include<iostream>
#include <stdio.h>
#include "ctime"
using namespace std;

class time{
private:
    std::clock_t start;
    double duration;

public:
    void begin(){
        start = std::clock();
    }
    void end(){
        duration = (std::clock()-start)/(double)CLOCKS_PER_SEC;
        cout<<"duration is "<<duration<<endl;
    }
    
};

#endif /* time_hpp */
