//
//  main.cpp
//  ranFileAccess
//
//  Created by Emil Santos on 2/25/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    fstream readFile;
    readFile.open("file1.txt");
    string temp;
    readFile.seekg(38880);
    //cout << readFile.tellg();
    string ary[4];
    
    //put the numbers at the 7777th - 7781st place into an array
    cout<<"numbers in the 7777th - 7781st place:\n";
    for(int i=0;i<=4;i++){
        getline(readFile, temp);
        ary[i] = temp;
        cout<<ary[i]<<endl;
    }
    
    //tells the user a bit of what is going on.
    cout<<"////////////////////////////////////////////////////////////////////////\n";
    cout<<"these numbers will be placed between the 6000th and 6001st number.\n";
    cout<<"anything below will be pushed down by printing from temp array.\n";
    
    //seekg(30000) is the 6000th place so that i can put everything below into an arrray.
    readFile.seekg(30000);
    string ary2[3999];
    for(int i=0;i<=3998;i++){
        getline(readFile, temp);
        ary2[i] = temp;
        //cout<<ary2[i]<<endl;
    }
    
    //start writing from after 6000th place but before 6001st
        readFile.seekp(30000);
    for(int i=0;i<=4;i++){
        readFile<<ary[i]<<endl;
        //cout<<readFile.tellp();
    }
    
    //rewrites the numbers below in order to make room for the inserting numbers
    for(int i=0;i<=1775;i++){
        readFile<<ary2[i]<<endl;
        //cout<<readFile.tellp();
    }
    
    //close the file
    readFile.close();
    return 0;
}









