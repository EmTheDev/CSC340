Recursion--implementation and complexity analysis
Questions:

• Coding questions: Create an ADT that contains a fixed-size array that can hold at most 100 integers and the following member functions:

o A default constructor that initializes all the elements in this array to 0.

o A member function that asks an end user to provide a list of integers from the keyboard and stores these numbers into the fixed-size array.

o A member function that recursively prints out the array in reverse order. For example, if the array contains the number 4, 19, and 17. Your function will print out: 17, 19, 4.

o A member function that recursively searches the largest number in the array. This function will return not only the value of the largest number but also its index in the array.

o A member function that recursively finds the value of the k-th smallest number in the array, where k is provided by the end-user. You are required to use the partition-based, recursive algorithm as discussed in class.

o Optional: A member function that implements the QuickSort algorithm to sort the array in increasing order.

o Optional: A member function that implements the QuickSort algorithm to sort the array in decreasing order.

o Optional: An overloaded put operator (<<) to recursively print out the elements in the array in order.
Separate compilation is required. Please also include test cases in the main() function to call and test all your recursive functions. The two optional member functions are worth 1 bonus point.

• Complexity analysis:Represent the time complexity of the following recursive algorithm, T(n), as a recurrence equation:

int pow_17(int n){
  if ( n==1) 
    return 17;
  if ( n > 1) 
    return ( 17 * pow_17(n-1) );
}
• Complexity analysis: analyze the time complexity of the Top-Down implementation of the MergeSort algorithm on the following wikipedia webpage: http://en.wikipedia.org/wiki/Merge_sort

You are required to represent the time complexity of TopDownMerge() as a polynomial function of the input size. Then represent the time complexity of TopDownSplitMerge(A[], iBegin, iEnd, B[]) as a recurrence equation. You don't need to solve this equation.

Submission: Please include your solutions to the time complexity questions in one PDF or plain text file. Then archive this file together with your source code. Your final submission should contain only one compressed file.