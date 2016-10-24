#include <iostream>

using namespace std;

class Test
{
	public:
	Test();
	~Test();
	void SetValue(int val);
	int GetValue(void) const;
	
	private:
	int value;
};

Test::Test():
value(1)
{
	std::cout << "create test class" << std::endl;
}
Test::~Test()
{
	std::cout << "delete test class" << std::endl;
}
void Test::SetValue(int val)
{
	value = val;
	std::cout << "SetValue=" << value << std::endl;
}
int Test::GetValue(void) const
{
	std::cout << "GetValue=" << value << std::endl;
	return value;
}
int main()
{
	Test TestClass;
	int input;

	
	std::cout << "hello world" << std::endl;
	
	cout << "please input int value" << endl;
	std::cin >> input;
	TestClass.SetValue(input);
	std::cout << "TestClass.value=" << TestClass.GetValue() << std::endl;
	return 0;
}