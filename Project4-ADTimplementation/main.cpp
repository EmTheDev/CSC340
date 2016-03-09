//
//  main.cpp
//  ADTimplementation
//
//  Created by Emil Santos on 3/16/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

#include <iostream>
#include "header.h"

int main(int argc, const char * argv[]) {
    header gray(""); //call constructor from main
    gray.polyInput(); //call polyInput function from main
    while(true){ //while loop to keep going through the menu
        gray.menu(); //call the menu function 
    }
    
    
}
