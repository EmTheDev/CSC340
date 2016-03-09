//
//  header.cpp
//  ADTimplementation
//
//  Created by Emil Santos on 3/16/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//
#include <vector>
#include <stdio.h>
#include <iostream>
#include "header.h"

using namespace std;

header::header(string x){ //call header function and create a header object
    name = x; //name will equal the value passed in
    
}

int header::polyInput(){ //start to input the polynomial information
    cout << "How many terms do you wish to have for this polynomial?: "; //prompt user
    cin >> numTerms; //take the number of terms from the user
    cout << "Please enter your coefficients:\n"; //prompt user for each coefficient
    int x;//this will be the temp variable for coeffiecient for coVector
    for(int i=0; i<numTerms; i++){ //for loop to take all the inputs from user
        cin >> x; //input for temp variable x
        coVector.push_back(x); //push the new variable into the coVector
        tempVector.push_back(x); //tempVector
    }
    
    cout << "Your coefficients are: \n";  //tell the user that their coefficients will appear
    for(int j=0; j<numTerms; j ++){ //for loop to print all of the coefficients
        cout<<coVector[j]<< " "; //print the coefficients one at a time
    }
    
    cout << "\n----------------------------------------------\n"; //spacing to make things cleaner
    //prompt users for powers
    cout << "Please write the powers to each corresponding coefficient: \n";
    double y; //initialize temp variable y
    
    for(int k = 0; k < numTerms; k++){ //for loop to get all power variables
        cin >> y; //take the user input for y
        poVector.push_back(y); //push value into power vector
    }
    
    for(int l=0; l<numTerms;l++){ //for loop to tell user their powers
        cout<<poVector[l]<< " "; //print out power of coefficient 1 by 1
    }
    
    cout << "\n----------------------------------------------\n";
    cout << "Your polynomial is: \n";
    for(int m = 0; m < numTerms; m++){ //for loop to show the polynomial that the user created
        cout << coVector[m] << "x^" << poVector[m]; //print polynomial
        if(coVector[m+1]>=0){ //if statement to display plus signs
            
            cout << " + "; //display plus signs between a nonnegative number
        }
    }
    
    return 0; //return 0
}

int header::degree(){ //shows the highest degree
    cout << "The polynomials highest degree is: ";
    deg = 0;
    for(int i=0; i<poVector.size(); i++){ //algorithm to extract the highest degree
        if (poVector[i]>deg){
            deg = poVector[i];
        }
    }
    cout << deg << "\n"; //print the highest degree
    return deg;
}

int header::coefficientOfPower(){
    cout << "Which power do you want to check coefficient of?: "; //prompt user for power of var
    double x; //temp variable to hold users input
    cin >> x; //take user input
    cout << "\nthe coefficients for your selected power is/are: ";
    
    for(int i=0; i<poVector.size();i++){
        if(poVector[i]==x){
            cout << coVector[i] << " ";
        }
    }
    cout << "\n";
    return 0;
}

int header::changeCoefficient(){ //change coefficient(s) of selected power(s)
    cout << "change the coefficient to which power?: ";
    double x; //temp variable to get from the user for the power they choose
    cin >> x; //take the users input
    int newCo; //variable to change the current coefficient to new coefficient
    
    for(int i=0; i<poVector.size(); i++){ //for loop to check through the polynomial
        if(poVector[i] == x){ //if the input == a power, allow user to change coefficient
            cout<< "\nchange coefficient of " << coVector[i] << "x" << "^" << poVector[i] << " too :";
            cin>>newCo; //user will input new coefficient
            coVector[i]=newCo; //store the new coefficient to the coefficient vector
        }
    }
    
    return 0;
}

int header::multiplyPoly(){ //multiply the whole polynomial by a scalar
    
    double x; //temp variable or the scalar
    cout << "What scalar do you want to multiply the polynomial by: "; //prompt user for scalar
    cin >> x; //take user input for scalar
    
    for(int i=0; i<coVector.size();i++){ //for loop to go through the vector
        coVector[i] = coVector[i]*x;  //multiply each number in vector by the scalar
    }
    return 0;
}

int header::addPoly(){ //add polynomial with newly created polynomial
    cout << "create another polynomial to add the current one too\n";
    
    cout << "How many terms do you wish to have for this polynomial?: ";
    cin >> numTerms2; //input the number of terms of the new polynomial
    
    int x; //initialize temp variable x
    for(int i=0; i<numTerms2; i++){ //for loop to make the new coefficients of new polynomial
        cin >> x; //input coefficient
        coVector2.push_back(x); //pushback the number of into the 2nd coefficient vector
    }
    
    cout << "Your coefficients are: \n";
    for(int j=0; j<numTerms2; j ++){
        cout<<coVector2[j]<< " "; //print out the coefficients that the user just entered
    }
    
    cout << "\n----------------------------------------------\n";
    cout << "Please write the powers to each corresponding coefficient: \n";
    double y; //initialize temp variable y
    
    for(int k = 0; k < numTerms2; k++){ //for loop to get all of the powers to second polynomial
        cin >> y; //get temporary user input for the power
        poVector2.push_back(y); //pushback value into the polyVector
    }
    
    for(int l=0; l<numTerms2;l++){ //for loop to print out each power inputed.
        cout<<poVector2[l]<< " ";
    }
    
    cout << "\n----------------------------------------------\n";
    cout << "The 2nd polynomial is: \n";
    for(int m = 0; m < numTerms2; m++){ //prints out the whole new polynomial
        cout << coVector2[m] << "x^" << poVector2[m];
        if(coVector2[m+1]>=0){
            cout << "+";
        }
    }
    
    cout << "\n----------------------------------------------\n";
    cout << "(";
    for(int m = 0; m < numTerms; m++){
        cout << coVector[m] << "x^" << poVector[m];
        if(coVector[m+1]>=0){ //prints out first polynomial
            cout << "+";
        }
    }
    cout << ") + "; //addition sign between poly1 and poly2
    
    cout << "(";
    for(int m = 0; m < numTerms2; m++){
        cout << coVector2[m] << "x^" << poVector2[m];
        if(coVector2[m+1]>=0){ //prints out second polynomial
            cout << "+";
        }
    }
    cout <<")";
    
    
    for(int z=0; z<poVector.size(); z++){
        for(int y=0; y<poVector2.size();y++){ //makes the added polynomial
            if(poVector[z] == poVector2[y]){
                coVector[z] += coVector2[y];
            }
        }
    }
    
    cout<< " = ";
    //prints out the added polynomials
    for(int m = 0; m < coVector.size(); m++){
        cout << coVector[m] << "x^" << poVector[m];
        if(coVector[m+1]>=0){
            cout << "+";
        }
    }

    return 0;
}

int header::printPoly(){
    
    //prints out the polynomial
    cout << "Your polynomial is: \n";
    for(int m = 0; m < numTerms; m++){
        cout << coVector[m] << "x^" << poVector[m];
        if(coVector[m+1]>=0){
        
            cout << " + ";
        }
    }
    return 0;
}

//divides polynomial by a selected number
int header::dividePoly(){
    cout<< "divide the polynomial by what number?: ";
    double x;
    cin >> x;
    for(int i=0; i<coVector.size();i++){
        coVector[i] = coVector[i]/x;
    }
    return 0;
}

//negates each number in the polynomial
int header::negatePoly(){
    double x = -1;
    for(int i =0; i<coVector.size();i++){
        coVector[i] = coVector[i]*x;
    }
    
    return 0;
}

//prints polynomial
int header::put(){
    for(int m = 0; m < numTerms; m++){
        cout << coVector[m] << "x^" << poVector[m];
        if(coVector[m+1]>=0){
            if(coVector[m]==numTerms){
                break;
            }
            cout << " + ";
        }
    }
    
    return 0;
}


//menu in while loop to keep asking user for the command
int header::menu(){
    cout << "\n-------------------------------------------------\n";
    cout << " \nCOMMANDS:\n";
    cout << " degree         coefficientOfPower    changeCoefficient\n";
    cout << " multiplyPoly   addPoly               printPoly\n";
    cout << " dividePoly     negatePoly            put\n";
    cout << " exit\n";
    cout << "-------------------------------------------------\n";
    string input;
    cin >> input;
    
    //a function will be called depending on what the user has inputted.
    if(input=="degree"){
        header::degree();
    }else if(input=="coefficientOfPower"){
        header::coefficientOfPower(); //calls coefficientOfPower function
    }else if(input=="changeCoefficient"){
        header::changeCoefficient(); //calls changeCoefficient function
    }else if(input=="multiplyPoly"){
        header::multiplyPoly(); //calls multiplyPoly function
    }else if(input=="addPoly"){
        header::addPoly(); //calls addPoly function
    }else if(input=="printPoly"){
        header::printPoly();  //calls printPoly function
    }else if(input=="dividePoly"){
        header::dividePoly(); //calls dividePoly function
    }else if(input=="negatePoly"){
        header::negatePoly(); //calls negatePoly function
    }else if(input=="put"){
        header::put(); //calls put function
    }else if(input=="exit"){
        exit (EXIT_FAILURE); //exit the program if the user types exit as input
    }else{
        //displays if the user did not input a proper command
        cout << "That is not a proper command";
    }
    
    return 0;
}

