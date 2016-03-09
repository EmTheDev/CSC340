//
//  recursionADT.h
//  Recursion
//
//  Created by Emil Santos on 4/27/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

#ifndef __Recursion__recursionADT__
#define __Recursion__recursionADT__

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class recursionADT{
    private:
    int arrSize;
    int arr[100];
    void partition(int k, vector<int> tempArr,int begi, int start, int pivot, int userArray[]);
    
    
    public:
    //constructor
    recursionADT();
    
    //functions
    void createArray(int mainArray[], int arraySize);
    void reverseOrder(int position, int mainArray[]);
    void lrgNum(int lrg, int index, int pos, int mainArray[]);
    void kSmall(int k, vector<int> tempArr, int start, int pivot, int mainArray[]);
    
};

#endif /* defined(__Recursion__recursionADT__) */
