#include <iostream>

using namespace std;

class A
{
public:
	A(){cout << "class A A" << endl;}
	virtual ~A(){cout << "class A ~A" << endl;}
	virtual A *func(void)	 
	{
		cout << "class A func" << endl;
		return this;
	}
	virtual int func2(void)	 
	{
		cout << "class A func2" << endl;
		return 1;
	}
	int func3(void)	 
	{
		cout << "class A func3" << endl;
		return 2;
	}
private:
	
protected:

}; 
class B : public A
{
public:
	B(){cout << "class B B" << endl;}
	virtual ~B(){cout << "class B ~B" << endl;}
	virtual B *func(void)	 
	{
		cout << "class B func" << endl;
		return this;
	}
	int func2(void)	 
	{
		cout << "class B func2" << endl;
		return 2;
	}
	int func3(void)	 
	{
		cout << "class B func3" << endl;
		return 2;
	}
private:
	
protected:

}; 
class C : public B
{
public:
	C(){cout << "class C C" << endl;}
	virtual ~C(){cout << "class C ~C" << endl;}
	virtual C *func(void)	 
	{
		cout << "class C func" << endl;
		return this;
	}
	int func2(void)	 
	{
		cout << "class C func2" << endl;
		return 2;
	}
	int func3(void)	 
	{
		cout << "class C func3" << endl;
		return 2;
	}
protected:

private:

};
int main()
{
	A *pA = new B;
	B *pB = new C;
	
	pA->func();
	pA->func2();
	pA->func3();
	
	pB->func();
	pB->func2();
	pB->func3();
	
	delete pA;
	delete pB;
	return 0;
}
