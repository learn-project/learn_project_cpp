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
	
	static void static_func1(void)
	{
		static_val = static_const_val;
		cout << "class A static_func1,static_val=" << static_val << endl;
	}
private:
	
protected:
	static int static_val;
	static const int static_const_val = 10;
	int value;
}; 
int A::static_val = 1;

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
	virtual void call_static_func1(const B &b)
	{
		cout << "class B call_static_func1" << endl;
		
		A::static_func1();
		B::static_func1();
		b.static_func1();
		static_func1();
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
	virtual void call_static_func1(const B &b)
	{
		cout << "class C call_static_func1" << endl;
		A::static_func1();
		B::static_func1();
		C::static_func1();
		b.static_func1();
		static_func1();
		A::static_val = 1;
		B::static_val = 1;
		C::static_val = 1;
		b.static_val = 1;
		
	}
protected:

private:

};
class base  
{  
public:  
     static int funA() {return 0;} 
    int funB(){}
};  
int (*pfA)() = &base::funA; //普通的函数指针  
int (base::*pfB)() = &base::funB; //成员函数指针  

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
	pB->call_static_func1(*pB);
	
	
	delete pA;
	delete pB;
	return 0;
}


