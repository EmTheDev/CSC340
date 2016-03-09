//
//  main.cpp
//  Recursion
//
//  Created by Emil Santos on 4/27/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "recursionADT.h"

int main() {
    //create recursionADT object and initialize main variables
    recursionADT object;
    int option;
    int arraySize = 100;
    int mainArray[arraySize];
    
    //command list
    while(1==1){
        cout << "COMMAND LIST" << endl;
        cout << "=============================================" << endl;
        cout << "1.Input New Numbers   2.Reverse The Order   3.Largest num in array   4.Find k-th smallest number in array   5.Quicksort" << endl;
        cout << "=============================================" << endl;
        cout << "option number: ";
        cin >> option;
    
    //Invalid number message. (try again)
    if(option < 1 || option > 5){
        cout << "You must choose a number between 1 and 5" << endl;
    }
    
    //IF OPTION 1 IS CHOSEN...
    //prompt user to enter the size of the array that they desire
    if(option == 1){
        cout << "How many numbers are you going to input(choose size from 1-100)?: ";
        cin >> arraySize;
        
        //Invalid array size message.(try again)
        while(arraySize < 1 || arraySize > 100){
            cout << "You must choose a number between 1 and 100" << endl;
            cout << "How many numbers are you going to input?:";
            cin >> arraySize;
            }
        
        //IF OPTION 1 IS CHOSEN...
        //prompt user to enter numbers
        cout << "Please Enter numbers:" << endl;
        for(int i = 0; i < arraySize ; i++){
            cin >> mainArray[i];
            }
        object.createArray(mainArray, arraySize);
        }
        
        //IF OPTION 2 IS CHOSEN...
        //print out the array in reverse order
        if(option == 2){
            cout << "Reverse Order: ";
            object.reverseOrder(arraySize, mainArray);
        }
        
        //IF OPTION 3 IS CHOSEN...
        //find the largest number in the array and prints out its location
        if(option == 3 ){
            cout << "The largest number in the array is ";
            object.lrgNum(0, 0, 0, mainArray);
        }
        
        //IF OPTION 4 IS CHOSEN...
        //finds the k-th smallest number recursively
        if(option == 4){
            int start = 0;
            int pivot = arraySize-1;
            vector <int> tempArr(arraySize);
            for(int i = 0; i < arraySize; i++){
                tempArr[i] = 0;
            }
            int k;
            cout << "What k-th smallest number would you like to find?: ";
            cin >> k;
            
            //Error if given number is out of range
            while(k < 0 || k > arraySize){
                cout << "ERROR! The k-th value that you have chosen is out of range! You must choose a number between 1 and " << arraySize << "!" << endl;
                cout << "What k-th smallest number would you like to find?: ";
                cin >> k;
            }
            //Print out the k-th smallest number with the given k
            cout << "The " << k << "-th smallest number is ";
            object.kSmall(k, tempArr, start, pivot, mainArray);
            cout << endl;
        }
    }
    }
