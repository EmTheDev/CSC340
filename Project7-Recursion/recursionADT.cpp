//
//  recursionADT.cpp
//  Recursion
//
//  Created by Emil Santos on 4/27/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

#include "recursionADT.h"

using namespace std;

//constructor that sets elements to 0
recursionADT::recursionADT(){
    arrSize = 100;
    arr[arrSize];
    for (int i = 0; i < 100; i++){
        arr[i] = 0;
        }
    }

    //Creates an array with user specified values
    void recursionADT::createArray(int mainArray[], int arraySize){
        arrSize = arraySize;
        for (int i = 0; i < arrSize; i++){
            arr[i] = mainArray[i];
        }
    }

    //prints array in reverse order(recursive)
        void recursionADT::reverseOrder(int position, int mainArray[]){
            position = position - 1;
            if(position > 0){
                cout << mainArray[position];
                reverseOrder(position, mainArray);
            }else if(position == 0){
                    cout << mainArray[0] << endl;
                }
            }
    //print out the largest number in the array
    void recursionADT::lrgNum(int lrg, int index, int pos, int mainArray[]){
        if(index<arrSize){
            if(lrg<mainArray[index]){
                lrg = mainArray[index];
                pos = index;
            }
            lrgNum(lrg, index + 1, pos, mainArray);
        }
        if(index == arrSize){
            cout << lrg << " which is at index [" << pos << "]" << endl;
        }
}

    //prints out k-th smallest number in the array
    void recursionADT::kSmall(int k, vector<int> tempArr, int start, int pivot, int mainArray[]){
        if(arrSize == 100 || arrSize == 1){
            cout << mainArray[0] << " at index [0]" << endl;
        }else{
            int tempSize = arrSize;
            int outArray[arrSize];
            for(int i = 0; i < arrSize; i++){
                outArray[i] = mainArray[i];
            }
            int st = 0;
            partition(k, tempArr,st, start, pivot, mainArray);
            for (int i = 0; i <tempSize; i++){
                outArray[i] = outArray[i];
                if (arrSize == outArray[i])
                    cout << " at index ["<<i<<"]"<<endl;
            }
            arrSize = tempSize;        }
}

    //partition function that works recursively to find the k-th smallest number
    void recursionADT::partition(int k, vector<int> tempArr,int st, int start, int pivot, int mainArray[]){
    int end = pivot;
    for (int i = st; i < pivot; i++){
        if (mainArray[pivot] <= mainArray[i]){
            tempArr[start] = mainArray[i];
            start = start + 1;
        }
        else if (mainArray[pivot] > mainArray[i]){
            tempArr[end] = mainArray[i];
            end = end - 1;
        }
    }
    tempArr[start] = mainArray[pivot];
    int comp = tempArr.size() - start;
    if (comp == k){
        cout << tempArr[start];
        arrSize = tempArr[start];
    }
    else if (comp > k){
        st = start + 1;
        for (int i = 0; i <arrSize; i++)
            mainArray[i] = tempArr[i] ;
        partition(k, tempArr, st, start + 1, pivot, mainArray);
    }
    else if (comp < k){
        st = 0;
        for (int i = 0; i <arrSize; i++)
            mainArray[i] = tempArr[i] ;
        partition(k, tempArr, st, 0, (start - 1), mainArray);
    }
    
}
