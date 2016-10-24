#ifndef __TEST_H__
#define __TEST_H__

class Test
{
public:
	Test();
	~Test();
	void SetValue(int val);
	int GetValue(void) const;
	
	inline int GetValueSquare(void) const;
	
private:
	int Value;
};
#endif