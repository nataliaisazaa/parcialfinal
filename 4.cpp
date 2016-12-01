#include <iostream>

using namespace std;

int main(){
    int C,i,j,x1,x2,y1,y2,CV,vx,vy;
    cin>>C;
    i=0;
    while(i<C){
        cout<< "x1"<<endl;
        cin>> x1;
        cout<< "y1"<<endl;
        cin>> y1;
        cout<< "x2"<<endl;
        cin>> x2;
        cout<< "y2"<<endl;
        cin>> y2;
        cout <<"cantidad de vacas"<< endl;
        cin>> CV;
        j=0;

        while(j<CV){
            cout<<"coordenada de la vaca "<< j+1 <<" en x";
            cin>> vx;
            cout<<"coordenada de la vaca "<< j+1 <<" en y";
            cin>> vy;
            if((vx>x1&&vx<x2)&&(vy>y1&&vy<y2)){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
                }
                j++;
            }
        i++;
    }
    return 0;
}
