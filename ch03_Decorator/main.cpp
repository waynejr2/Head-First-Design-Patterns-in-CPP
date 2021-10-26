#include <iostream>

#include "Decaf.h"
#include "Espresso.h"
#include "MochaDecorator.h"
#include "MilkDecorator.h"

using std::cout;
using std::endl;


int main(){
    cout << "---------------------------" << endl;
   
    // only Decaf, no addsOn
    Beverage* decafOnly = new Decaf();
    cout << decafOnly->getDescription() << endl;
    cout << decafOnly->cost() << endl;
    delete decafOnly;
    cout << "---------------------------" << endl;

    // Decaf + Mocha
    Beverage* decaf = new Decaf();
    MochaDecorator mocha_decaf = MochaDecorator(decaf);
    cout << mocha_decaf.getDescription() << endl;
    cout << mocha_decaf.cost() << endl;
    delete decaf;
    cout << "---------------------------" << endl;

    // Espresso + Milk
    Beverage* espresso = new Espresso();
    MilkDecorator milk_espresso = MilkDecorator(espresso);
    cout << milk_espresso.getDescription() << endl;
    cout << milk_espresso.cost() << endl;
    delete espresso;
    cout << "---------------------------" << endl;

    // Note: decorators can wrap not only components but the other decorators as well

    // Esresso + Mocha + Milk + Milk,  method 1-------------------------------
    // Beverage* espresso2 = new Espresso();                               // Espresso
    // MochaDecorator* mocha_espresso = new MochaDecorator(espresso2);     // Espresso + Mocha
    // MilkDecorator* milk_deco = new MilkDecorator(mocha_espresso);       // Espresso + Mocha + Milk
    // MilkDecorator* milk_deco2 = new MilkDecorator(milk_deco);           // Espresso + Mocha + Milk + Milk
    // cout << milk_deco2->getDescription() << endl;
    // cout << milk_deco2->cost() << endl;
    // delete espresso2;
    // delete mocha_espresso;
    // delete milk_deco;
    // delete milk_deco2;

    // Esresso + Mocha + Milk + Milk,  method 2. TODO: how to delete the memory for 
    Beverage* espresso2 = new MilkDecorator(new MilkDecorator(new MochaDecorator(new Espresso())));
    cout << espresso2->getDescription() << endl;
    cout << espresso2->cost() << endl;
    delete espresso2;
 
    
    cout << "---------------------------" << endl;
    return 0;
}