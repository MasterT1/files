#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream textf;
   
   textf.open("abc.txt");
   textf<<a<<"\n";
   textf<<b<<"\n";
   textf<<c<<"\n";
   textf.close();
   	
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;
 
   return 0;
}
