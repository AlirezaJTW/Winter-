#include <iostream>
using namespace std;
int main()
{
int dec = 0 , array[10];
for (int i = 0; i < 10; i++)
{
cout << "fill ur array" ;
cin >> array[i] ;
if (array[i] != 0)
{
dec = (2 * array[i])^(i) ;
}
}
cout << dec << " : is ur dec num " ;
return 0 ;
}