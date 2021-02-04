#include <iostream>
#include "s3.h"
using namespace std;

 //const int a=2,b=8,c=3,d=5;
int x;
double f;

int m[3][3][3]={000, 001, 002,010, 011, 012,020, 021, 022,100, 101, 102,110, 111, 112,120, 121, 122,200, 201, 202,210, 211, 212,220, 221, 222};

int *pm=&m[1][1][1];
int main(){

    f=(double)a*((double)b+((double)c/(double)d));
    std::cout << f << std::endl;
    std::cin >> x;
    x<=21 ? (std::cout <<21-x<< std::endl) : (std::cout <<2*(x-21)<< std::endl);

    std::cout << *pm << '\n';

}
