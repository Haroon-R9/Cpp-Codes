#include <iostream>
using namespace std;
int main()
{
    int a=3, b=2, c=33;
    if (a >=b && a >=c ) {
    cout << "a is the greatest number"; }
    else if (b >=a && b >=c){
    cout << "b is the greatest number"; }
    else 
    cout << "c is the greatest number";
    return 0;
}