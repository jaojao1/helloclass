#include"helloclass.h"
#include<iostream>
using namespace std;

HelloClass::HelloClass()
{
	cout<<"Create"<<endl;
}

HelloClass::~HelloClass()
{
	cout<<"Destroy"<<endl;
}

void HelloClass::sayHello()
{
	cout<<"hello"<<endl;
}
