#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

double a = 0, b = 1;


double f( double x )
{
   return asin( x ) / 2.0;  // function to be integrated - must be less than or equal to 1
}


int main ( ) 
{    
    srand( time( 0 ) );

    int N;
    cout << "Number of simulation points: ";
    cin >> N;

    int counter = 0;
    for ( int n = 1; n <= N; n++)
    {
       double x = a + ( b - a ) * rand() / ( RAND_MAX + 1.0 );
       double y = a + ( b - a ) * rand() / ( RAND_MAX + 1.0 );
       if ( y < f(x) ) counter++;
    }

    cout << "Estimate of integral: " << counter/(double)N;
}
