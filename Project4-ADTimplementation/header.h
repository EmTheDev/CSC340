//
//  header.h
//  ADTimplementation
//
//  Created by Emil Santos on 3/16/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

#ifndef __ADTimplementation__header__
#define __ADTimplementation__header__

#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

class header
{
private:
    string name; //initialize name
    int numTerms; //initialize number of terms
    int deg;  //initialize degree of the corresponding polynomial
    
    vector<double> coVector; //vector for the coefficient
    vector<double> poVector; //vector for the polynomials for coefficients
    
    
    int numTerms2; //
    int deg2; //
    vector<double> coVector2; //2nd coefficient vector for adding
    vector<double> poVector2; //2nd power vector for adding
    
    vector<double> tempVector; //temporary vector
    
public:
    header(string z); //constructor
    int polyInput(); //create your polynomial
    int degree(); //shows the highest degree
    int coefficientOfPower(); //get the coefficient(s) of a selected power
    int changeCoefficient(); //change the coefficient(s) of a selected power
    int multiplyPoly(); //multiply two polynomials, with another one created by the user
    int addPoly(); //add a created polynomial with a newly created polynomial
    int printPoly(); //print out the current polynomial
    int dividePoly(); //divide the polynomial coefficients by a selected number
    int negatePoly(); //negate the whole polynomial
    int put(); //print out the polynomial as string
    int menu(); //the menu in a loop so they can keep entering commands.
    
    
};















#endif /* defined(__ADTimplementation__header__) */
