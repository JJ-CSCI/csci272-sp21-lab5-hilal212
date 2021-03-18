//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
using namespace std;

// Write the assignment code here
class Real{
private :
double Real;
public:
Real(double r) : re(r)
{
}
double GetReal() ,const {return re;}
//
Real operator+ (double v)
{
return Real(re + v);
}};
class Complex : public Real
{
private:
double im; 
public:
Complex(double r, double i) : Real(r), im(i)
{}
double GetImaginary() const
{
return im;
}
Complex operator+(double v)
{
return Complex (GetReal()+ v, im + v);
}
}; 
public:
// Initialize re,im and add sur
Surreal(double a, double b, double c) : Complex(a, b), sur(c) 
{}
// Accessor to return Surreal
double GetSurreal()
{
return Surreal;
}
Surreal operator+(double v)
{
return Surreal (Get Real()+v, GetImaginary()+v,Surreal+v);
}; 

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "c1" ) {
        Real n{10.0};
        REQUIRE( n.GetReal() == 10.0 );
    }
    SECTION( "c2" ) {
        Complex n{10.0, 20.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
    }
    SECTION( "c3" ) {
        Surreal n{10.0, 20.0, 30.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
        REQUIRE( n.GetSurreal() == 30.0 );
    }
    SECTION( "a1" ) {
        Real n{10.0};
        Real r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
    }
    SECTION( "a2" ) {
        Complex n{10.0, 20.0};
        Complex r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
        REQUIRE( r.GetImaginary() == 40.0 );
    }
    SECTION( "a3" ) {
        Surreal n{10.0, 20.0, 30.0};
        Surreal r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
        REQUIRE( r.GetImaginary() == 40.0 );
        REQUIRE( r.GetSurreal() == 60.0 );
    }
}
//------------------------------
