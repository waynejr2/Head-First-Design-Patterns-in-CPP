#include "VeggiePizza.h"
#include <iostream>
using namespace std;

VeggiePizza::VeggiePizza(){
    m_name = "Veggie Pizza";
}

VeggiePizza::~VeggiePizza(){
    cout << "in ~VeggiePizza()" << endl;
}