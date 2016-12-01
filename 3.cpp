#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int c,i;
    float pi,r,ac,l,ar,s;
    pi = 2 * acos (0.0);
    cin>>c;

    i=0;
    while(i<c){
        cout<<"ingrese radio"<<endl;
        cin>>r;

        ac=pi*r*r;
        l=r+r;
        ar=l*l;
        s=ac-ar;
        cout<<"la area de la sombra es "<<s<<endl;
        i++;
    }


return 0;
}
