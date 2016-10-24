#include <iostream>
#include "Test.h"

using namespace std;


Test::Test():
Value(1)
{
	cout << "create test class" << endl;
}
Test::~Test()
{
	cout << "delete test class" << endl;
}
void Test::SetValue(int val)
{
	Value = val;
	cout << "SetValue=" << Value << endl;
}
int Test::GetValue(void) const
{
	cout << "GetValue=" << Value << endl;
	return Value;
}
inline int Test::GetValueSquare(void) const
{
	int Square;
	
	Square = Value * Value;
	cout << "GetValueSquare=" << Square << endl;
	return Square;
}
int main()
{
	Test TestClass;
	int input;

	cout << "please input int Value" << endl;
	cin >> input;
	TestClass.SetValue(input);
	cout << "Value=" << TestClass.GetValue() << endl;
	cout << "Squarse=" << TestClass.GetValueSquare() << endl;
	return 0;
}