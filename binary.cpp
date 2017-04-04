#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream binf{"abc.bin", ios::binary};
   
   //binf.open("abc.bin");
   binf.write(reinterpret_cast<char*>(&a), sizeof(a));
   binf.write(reinterpret_cast<char*>(&b), sizeof(b));
   binf.write(reinterpret_cast<char*>(&c), sizeof(c));
   binf.close();
   	
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;
 
   return 0;
}
