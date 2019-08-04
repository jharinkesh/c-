#include<iostream>

using namespace std;

main()
{
   int n, i, f = 0, s = 1, l;

   cout << "Enter the number of terms of Fibonacci series you want" << endl;
   cin >> n;

   cout << "Fibonacci series are "<< endl;

   for ( i = 0 ; i < n ; i++ )
   {
      if ( i <= 1 )
         l = i;
      else
      {
         l = f + s;
         f = s;
         s = l;
      }
      cout << l << endl;
   }

   return 0;
}
