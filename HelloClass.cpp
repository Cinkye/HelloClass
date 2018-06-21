#include <iostream>
#include "HelloClass.h"
using namespace std;

HelloClass::HelloClass()
{
 cout << "Creating Class" << endl;
}

HelloClass::~HelloClass()
{
 cout << "Destroying Class" << endl;
}

void HelloClass::sayHello()
{
 cout << "Hello Class!" << endl;
}
