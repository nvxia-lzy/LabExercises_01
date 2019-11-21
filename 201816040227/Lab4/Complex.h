// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
   Complex (double,double);/* Declare a constructor that has one parameter for each data member */
   Complex add(const Complex &);
   Complex subtract(const Complex &);
   void printComplex();
   void setComplexNumber(double,double);/* Declare a set method for the part number */


private:
   double realPart;/* Declare a dounle data member for the Complex number */
   double imaginaryPart;/* Declare a double data member for the Complex number */
   double ComplexNumber;

}; // end class Invoice

#endif

