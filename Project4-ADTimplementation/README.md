# CSC340 - ADT implementation and Operator Overloading
Q1. (This is a variation of Excercise 9 on Page 28 in your textbook)

Use separate compilation to implement a polynomial ADT that manipulates polynomials in a single variable x (e.g., p = 4 x5 + 7 x 3 – x2 + 9 ). For this problem, consider only polynomials whose exponents are nonnegative integers. You are required to identify a proper data representation schema to store such polynomials and hide such data from external users of this ADT. Additionally, your ADT will at least include the following member functions:

One default constructor.

One method allowing one to get an entire polynomial by interacting with the user to obtain the degree and coefficient of each term in a polynomial.

degree() // Returns the degree of a polynomial, which is the highest power

// of a term with a nonzero coefficient. E.g., p.degree()=5

coefficient(power) // Returns the coefficient of the x p o w e r term.

changeCoefficient(newCoefficient, power) // Replaces the coefficient of

// the x p o w e r term with newCoefficient.

A method that multiplies a polynomial by a scalar variable

A method that adds two polynomials.

A method that prints out a polynomial.

Overload the division operator (/) as a member function to multiple divide a

polynomial by a scalar variable.

Overload the negation operator (-) as a member function to negate a polynomial

Overload the “put” operator (<<) to output a polynomial on an output stream.

Q2. (This is a variation of Problem 3 on Page 29 in your textbook) A matrix is a 2D array of numerical values. In this problem, you only need to consider square matrices. You can add or multiply two matrices to form a third matrix provided that the two matrices have the same size. You can multiply a matrix by a scalar, and you can transpose a matrix. Design and implement an ADT using separate compilation to represents a matrix that has these operations. Specifically, include the following member functions:

A default constructor that initializes its size to 0 by 0.

A constructor that initializes a matrix by using values stored in a vector of vectors.

A member function to set the number of rows and number of columns of a matrix, then initializes all the elements to 0.

A member function that retrieves the value at position (i, j).

A member function that sets the value at position (i, j) to a specified value.

A transpose function.

An overloaded multiplication operator (*) as a member function to multiply two matrices if their dimensionality matches.

An overloaded multiplication operator (*) as a member function to multiply a matrix by a scalar variable.

An overloaded subtraction operator (-) as a member function to subtract one matrix from another if their dimensionality matches.

An overloaded “put” operator (<<) to output a matrix on an output stream.

Further note: Implement one C++ project per question. For each project, you need to include a header file that describes the ADT interface, a .cpp file that implements all the methods specified in the header file, and another .cpp file that tests your ADT in the main() function. Please make sure to include a simple I/O that allows the grader to test your projects.