#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, cont=0;
    string x;
    cin>>n;
for (int i =0 ;i<n ;i++){
    cin>>x;
    if (x== "Tetrahedron")
    cont+=4;
    if (x== "Cube")
    cont+=6;
    if (x== "Octahedron")
    cont+=8;
    if (x== "Dodecahedron")
    cont+=12;
    if (x== "Icosahedron")
    cont+=20;

}
cout<<cont;
}

