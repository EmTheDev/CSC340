//
//  Vector_double.cpp
//  vectorADT
//
//  Created by Emil Santos on 5/6/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

#include "Vector_double.h"

using namespace std;

//Constructor
Vector_double::Vector_double(){
    size = 0;
    elements = 0;
    tempArray = NULL;
}

//Constructor with args
Vector_double::Vector_double(int arrSize, int theArray[]){
    size = arrSize;
    elements = arrSize;
    //fill temp array
    tempArray = new double[size];
    for (int i = 0; i < size; i++){
        tempArray[i] = theArray[i];
    }
}

//Destructor
Vector_double::~Vector_double(){
    if(tempArray != NULL){
        tempArray = NULL;
        size = 0;
        elements = 0;
    }
}

//Copy constructor
Vector_double::Vector_double(const Vector_double& copyObject){
    
    size = copyObject.size;
    elements = copyObject.elements;
    if(size<=0){
        tempArray = NULL;
    }else{
        tempArray = new double[size];
        }
    //fill temp array as copy
    for (int i = 0; i < size; i++){
        tempArray[i] = copyObject.tempArray[i];
        }
    }

//Overloaded assignment assignment operator
Vector_double Vector_double::operator=(const Vector_double& rhs){
    if (size > 0){
        delete [] tempArray;
    
    size = rhs.size;
    elements = rhs.elements;
        if (size <=0){
            tempArray = NULL;
        }else{
            //copy contents of the array
            tempArray = new double[size];
            for (int i = 0; i < size; i++){
                tempArray[i] = rhs.tempArray[i];
            }
        }
    }
        return (*this);
}
