#ifndef __TEST_H__
#define __TEST_H__

class Test
{
public:
	Test();
	~Test();
	void SetValue(int val);
	void SetValue(int val,int val2);
	int GetValue(void) const;
	
	inline int GetValueSquare(void) const;
	
	int GetValue2(void) const
	{
		return Value2;
	}
	
private:
	int Value;
	int Value2;
};
#endif