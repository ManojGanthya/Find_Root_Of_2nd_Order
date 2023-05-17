# Math # Find_Root_Of_2nd_Order #Manoj_Ganthya
This C++ code calculates the roots of a quadratic equation of the form aX^2 + bX + c = 0, where the user is prompted to enter the values of 'a', 'b', and 'c'. Here's a step-by-step breakdown of the code:

The code includes the necessary header files iostream and cmath for input/output and math functions respectively.

The main() function is the entry point of the program.

Inside the main() function, the variables a, b, c, d, Root, and Root2 are declared as floats. These variables will be used to store the coefficients and roots of the quadratic equation.

The user is prompted to enter the value of 'a' using cout (output) and cin (input) statements. The input value is stored in the variable a.

A while loop is used to check if a is equal to 0. If it is, it means the equation will become linear, and the user is prompted to enter a non-zero value for 'a' to avoid division by zero.

The user is then prompted to enter the values of 'b' and 'c' using similar cout and cin statements. The input values are stored in the variables b and c respectively.

The entered equation is displayed using cout, showing the values of 'a', 'b', and 'c'.

The code then proceeds to calculate the discriminant d using the formula d = b^2 - 4ac.

An if-else statement is used to determine the nature of the roots based on the value of the discriminant d.

If d is equal to 0, it means the roots are real and the same. The first root is calculated as -b/2a and stored in the variable Root. The result is displayed using cout.

If d is greater than 0, it means the roots are real and different. The roots are calculated using the quadratic formula (-b ± sqrt(d))/(2a) and stored in the variables Root and Root2. The results are displayed using cout.

If d is less than 0, it means the roots are complex. The code displays a message indicating that the roots are complex. The discriminant d is made positive by multiplying it with -1. Two variables, Root11 and Root12, are used to store the real and imaginary parts of the complex roots. The results are displayed using cout.

Finally, the code returns 0 to indicate successful execution of the program.

The provided code calculates the roots of a quadratic equation and handles cases where 'a' is zero and where the roots are real, real and different, or complex.

