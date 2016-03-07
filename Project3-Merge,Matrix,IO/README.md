# CSC340 - Programming Methodology
Matrix multiplication: Write a C++ program to compute the product of two matrices. You are required to use the template class vector to represent a matrix. (See the sample code below on how to create and initialize a 2d-matrix using vectors.) Specifically, your program will include the main( ) function and a second function multiply_matrices( ). The main() function will

o allow the end-users to provide the dimensionality of the two matrices A and B, and subsequently the content of A and B

o call the multiply_matrices() function to compute the product of A and B

o print out the multiplication result

File I/Os:Given two text files, each of which contains a a sorted list of integers (one integer per line) in non-decreasing order, write a C++ program to merge these two input files into a third file in which all the numbers remain their sorted order. Your program will include the main() function and another function that merges the two files. Specifically, the main() function will ask a user to type in the names of the two input files. It will then call the merging function to merge the two files. Finally, it informs the user the name of the merged file. Note that you are not allowed to first load all the numbers in the two files into an array or vector then apply a sorting algorithm to this array.

Random accesses to a file.The file posted here on iLearn contains a formatted list of 9999 integers that are randomly generated in the range of [1,9999]. Each integer occupies one single line and takes 4 characters' space per line. Alternatively, you can think that each number takes 5 characters' space, four for the number and one for the newline character. Write a C++ program using the seekg() and seekp() functions to insert the numbers 7777 through 7781 between the 6000-th and 6001-st numbers of the input file. Below are a few useful tips:

o The tellg() and tellp() functions return the position of the current character in an input stream or output stream, respectively.

o You are strongly recommended to use the tellg() function to first learn about the starting position of each integer. This will help you locate the exact starting position to insert the new numbers.

o You can use the width() function to specify the number of characters you'd like an integer to occupy.

o In addition to the "output" operator (<<), you can also use the write() function to write to a file.

o Before you insert the numbers, you will need to first store all the numbers from the 6001-st number in an internal data structure, e.g., array. Otherwise, some of them will be overwritten.

o Finally, always call the clear() function before calling the seekg() or seekp() function. Otherwise, you might encounter inexplicable behaviors.

Requirements:

o You are not allowed to create or use any other files except the single input file.

o You must use seekg() or seekp() to directly identify the insertion point to insert the new numbers.

o It's acceptable to hardcode the input file name and implement everything in the main() function. However, it's preferred to create a separate function that handles the insertion of new numbers.