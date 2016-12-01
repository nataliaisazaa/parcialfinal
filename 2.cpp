#include <iostream>

using namespace std;

int main (){
    int T,a,b,t,r;
    cin>>T;
    t=1;

    while(t<=T){
        cin>>a; cin>>b;
        r=b*4+9+10;
        cout<<"Case "<<t<<": "<<r<<endl;
        t++;
    }
return 0;
}
