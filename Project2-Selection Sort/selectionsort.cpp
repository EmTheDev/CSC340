//============================================================================
// Name        : Emil Santos
// ID          : 913450400
// Date        : Feb. 10, 2015
// Description : Read a randomly ordered list and sort them from smallest
//               to largest.
//============================================================================
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> readData(vector<int> myVector){
    int numz;
    cout<<"Enter your numbers"<<endl;//prompt user for numbers
    for(int i = 0; i<myVector.size();i++){ //for loop to fill vector with user input.
        cin >> numz;//user input for vector
        myVector[i] = numz;// vector address 'i' recieves the input.
    }
    return myVector;//return vector for next function
}

vector<int> selectionSort(vector<int> myVector){
    int i, j;
    int iMin;
    for (j = 0; j < myVector.size()-1; j++) {// for loop for selection sort.
        iMin = j;
        for ( i = j+1; i < myVector.size(); i++) {//find the smallest
            if (myVector[i] < myVector[iMin]) {//if the element is less then its the new min.
                iMin = i;
            }
        }
        
        if(iMin != j) {
            swap(myVector[j], myVector[iMin]);//swap the numbers if min is not equal to j.
        }
    }
    return myVector;//return vector to be used in printvector()
}
void printVector(vector<int> myVector){
    cout<< "Your numbers in a sorted sequence:\n";
    for(int i = 0; i<myVector.size();i++){//for loop to print the contents of vector
        cout <<myVector[i] << " ";
    }
    cout << endl;
}
    int main ()
{
    vector<int> myVector={0};//declaration of Vector within main
    int num;
    cout<<"how many numbers are you going to choose? \n";//prompt user 'how many'
    cin >>num; //input from user
    myVector.resize(num);//resize the vector into the users desired size.
    printVector(selectionSort(readData(myVector)));//The vector through 3 functions.
    return 0;
}