/*
// integer numerals
1776
707
-273
75 //decimal
0113 //octal
0x4b //hexadecimal
75 //int
75u //unsigned int
75l //long
75ul //unsigned long
75lu //unsigned long
//floating point numerals
3.14159 //3.14159
6.02e23 //6.02 x 10^23
1.6e-19 //1.6 x 10^-19
3.0 //3.0
4.89 //double
3.14159L //long double
6.02e23f //float
//strings
//must be enclosed in quotes
// escape codes:
\n	newline
\r	carriage return
\t	tab
\v	vertical tab
\b	backspace
\f	form feed (page feed)
\a	alert (beep)
\'	single quote (')
\"	double quote (")
\?	question mark (?)
\\	backslash (\)
*/

#include <iostream>
using namespace std;
const double pi = 3.14149;
const char newline = '\n';
int main()
{
    double r = 5.0; //radius
    double circle;
    circle = 2 * pi * r;
    cout << circle;
    cout << newline;
    return 0;
}

// can also use preprocessor definitions, ex. #define pi 3.14159, no semicolon required, syntax #define identifier replacement only works for constants