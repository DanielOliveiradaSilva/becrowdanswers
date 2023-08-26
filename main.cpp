#include <iostream>
#include<iomanip>
//Questão 1002 do uri
using namespace std;
int main (){

    float n = 3.14159;
    float raio;
    float area = 0;
    cin>>fixed>>setprecision(2);
    cin>>raio;
    area = n*raio*raio;
    cout<<fixed<<setprecision(4)<<endl;
    cout<<"A="<<area<<endl;

    return 0;
}