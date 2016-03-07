//
//  main.cpp
//  MatrixProd
//
//  Created by Emil Santos on 2/21/15.
//  Copyright (c) 2015 Emil Santos. All rights reserved.
//

//use the user-defined class: myIntVector
#include <iostream>
#include <vector>

using namespace std;

//putting the made matrixes into variable A and B
void multiply_matrices(vector< vector<int> > A, vector< vector<int> > B)
{
    int num_rowsC{0} , num_colsC{0}; //initialize resizable rows and cols.
    vector< vector<int> > C{{0},{0}}; //initialize vector within resizable vector
    num_rowsC = A.size();
    num_colsC = B[0].size();
    
    C.resize(num_rowsC); //reserve i rows
    for (int i=0; i<num_rowsC; i++){
        C[i].resize( num_colsC );
    }
    
    for(int i = 0; i<A.size(); i++) //in range(rows(matrix1)):
        for(int j = 0; j<B[0].size(); j++) //in range(cols(matrix2)):
            for(int k = 0; k<C.size();k++)//in range(rows(matrix3)):
                C[i][j] += A[i][k] * B[k][j];
    

    
    //prints out MatrixC which is AxB
    cout << "Matrix AxB:\n";
    for (int i=0; i<num_rowsC; i++) {
        for (int j=0; j<num_colsC; j++ ){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
}






int main()
{
    int num_rows{0} , num_cols{0}; //initialize resizable rows and cols.
    vector< vector<int> > matrixA{{0},{0}}; //initialize vector within resizable vector
    cout << "============================================================" << endl;
    cout << "Please input the dimensionality of Matrix A" << endl;
    cout << "input the number that represents the length: ";
    cin >> num_rows;//get number of rows from user
    cout << "============================================================" << endl;
    cout << "input the number that represents the height: ";
    cin >> num_cols;//get numbers of columns from user
    cout << "============================================================" << endl;
    cout << "input the contents of Matrix A, going by rows: " << endl;
    
    matrixA.resize(num_rows); //reserve i rows
    for (int i=0; i<num_rows; i++) //reserve j cols
        matrixA[i].resize( num_cols );
    
    //for loop to fill MatrixA
    for(int i=0; i<num_rows; i++){
        for(int j=0; j<num_cols; j++){
            int k;
            cin >> k;
            matrixA[i][j] = k;
        }
    }

    int num_rowsB{0} , num_colsB{0}; //initialize resizable rows and cols.
    vector< vector<int> > matrixB{{0},{0}}; //initialize vector within resizable vector
    cout << "============================================================" << endl;
    cout << "Please input the dimensionality of Matrix B" << endl;
    cout << "input the number that represents the length: ";
    cin >> num_rowsB;
    cout << "============================================================" << endl;
    cout << "input the number that represents the height of Matrix B: ";
    cin >> num_colsB;
    cout << "============================================================" << endl;
    cout << "input the contents of Matrix B, going by rows: " << endl;
    
    matrixB.resize(num_rowsB); //reserve i rows
    for (int i=0; i<num_rowsB; i++) //reserve j cols
        matrixB[i].resize( num_colsB );
    
    //for loop to fill MatrixB
    for(int i=0; i<num_rowsB; i++){
        for(int j=0; j<num_colsB; j++){
            int c;
            cin >> c;
            matrixB[i][j] = c;
        }
    }
    
    //prints out MatrixA
    cout << "Matrix A:\n";
    for (int i=0; i<num_rows; i++) {
        for (int j=0; j<num_cols; j++ ){
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }
    
    cout <<endl;
    
    //prints out MatrixB
    cout << "Matrix B:\n";
    for (int i=0; i<num_rowsB; i++) {
        for (int j=0; j<num_colsB; j++ ){
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }
    cout <<endl;
    
    //exit the program if the two matrices cannot be multiplied
    if(num_rows != num_colsB){
        cout <<"///////////////////////////////////////////////////////////////\n";
        cout <<"Matrix A and Matrix B cannot be multiplied because the"<< endl;
        cout <<"dimensions of the matrices are not compatible for multiplication.\n";
        cout <<"number of rows for Matrix A must be equal to the amount of columns of Matrix B.";
        cout <<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
        exit (EXIT_FAILURE);;
    }
    
    //function to passing through both matrixes to be multiplied.
    multiply_matrices(matrixA, matrixB);
    
    return 0;
    
}
