//
//  main.cpp
//  vectorADT
//
//  Created by Emil Santos on 5/6/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

#include <iostream>
#include "Vector_double.h"

int main(int argc, const char * argv[]) {
    
    Vector_double blah;
    
    std::cout << "\nHello, World!\n";
    
    int x = 5;
    
    int *ptr = NULL;
    
    ptr = &x;
    
    cout << *ptr << endl;;
    
    cout << ptr << endl;
    
    cout << &ptr << " " << &x << endl;
    
    
    
    return 0;
}
