#include "CheesePizza.h"
#include <iostream>
using namespace std;

CheesePizza::CheesePizza(){
    m_name = "Cheese Pizza";
    cout << "in CheesePizza()" << endl;
}

CheesePizza::~CheesePizza(){
    cout << "in ~CheesePizza()" << endl;
}