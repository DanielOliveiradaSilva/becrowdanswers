#include <iostream>
#include<iomanip>
//Questão 1002 do uri
using namespace std;
int main (){

    double n = 3.14159;
    double raio, area;
   
    cin>>raio;
    area = n*raio*raio;
    cout<<fixed<<setprecision(4);
    cout<<"A="<<area<<endl;
    
    return 0;
}