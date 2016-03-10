//
//  Vector_double.h
//  vectorADT
//
//  Created by Emil Santos on 5/6/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

#ifndef __vectorADT__Vector_double__
#define __vectorADT__Vector_double__

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Vector_double{
    
    private:
    int size;
    int elements;
    double *tempArray;
    
    public:
    //Constructors
    Vector_double();
    Vector_double(int Arrsize, int theArray[]);
    //Destructor
    ~Vector_double();
    //copy constructor
    Vector_double(const Vector_double& copyObject);
    //overloaded assignment operator
    Vector_double operator=(const Vector_double& rhs);
    
};



#endif /* defined(__vectorADT__Vector_double__) */
