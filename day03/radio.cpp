#include <iostream>
#include "Tuner.h"

using namespace std;


class Nxp6621Tuner : public Tuner
{
public:
	Nxp6621Tuner();
	~Nxp6621Tuner();
	
	virtual void TunerOn(void);
	virtual void TunerOff(void);
	virtual void TunerReset(void);
	virtual void SetFreq(int freq,int band);
	virtual void SetFreq(int freq);
	virtual void SetArea(int area);
	virtual void SetMute(int on);
	virtual void SetBand(int band);
	virtual void InitBand(void);
	virtual void StartAutoScan(void);
	virtual void ProcAutoScan(void);
	virtual void StopAutoScan(void);
	
	virtual bool IsSt(void) const;
	virtual int GetLevel(void) const;

protected:

private:

};

Nxp6621Tuner::Nxp6621Tuner():
Tuner()
{
	cout << "create Nxp6621Tuner" << endl;
	TunerOn();
	SetMute(1);
	InitBand();
	SetFreq(8750,0);
	SetMute(0);
}
Nxp6621Tuner::~Nxp6621Tuner()
{
	SetMute(1);
	TunerOff();
	cout << "delate Nxp6621Tuner" << endl;
}
	
void Nxp6621Tuner::TunerOn(void)
{
	cout << "Nxp6621Tuner Nxp6621TunerOn" << endl;
	On = true;
}
void Nxp6621Tuner::TunerOff(void)
{
	cout << "Nxp6621Tuner Nxp6621TunerOff" << endl;
	On = false;
}
void Nxp6621Tuner::TunerReset(void)
{
	cout << "Nxp6621Tuner Nxp6621TunerReset" << endl;
}
void Nxp6621Tuner::SetFreq(int freq,int band)
{
	Freq = freq;
	Band = band;
	cout << "Nxp6621Tuner SetFreq: freq=" << freq << " Band=" << band << endl;
}
void Nxp6621Tuner::SetFreq(int freq)
{
	Freq = freq;
	cout << "Nxp6621Tuner SetFreq: freq=" << freq << endl;
}
void Nxp6621Tuner::SetArea(int area)
{
	Area = area;
	cout << "Nxp6621Tuner SetArea:" << area << endl;
}
void Nxp6621Tuner::SetMute(int on)
{
	if(on)
	{
		
	}
	else
	{
		
	}
	cout << "Nxp6621Tuner SetMute:" << on << endl;
}
void Nxp6621Tuner::SetBand(int band)
{
	Band = band;
	cout << "Nxp6621Tuner SetBand = " << band << endl;
}
void Nxp6621Tuner::InitBand(void)
{
	cout << "Nxp6621Tuner InitBand" << endl;
}
void Nxp6621Tuner::StartAutoScan(void)
{
	cout << "Nxp6621Tuner StartAutoScan" << endl;
}
void Nxp6621Tuner::ProcAutoScan(void)
{
	cout << "Nxp6621Tuner ProcAutoScan" << endl;
}
void Nxp6621Tuner::StopAutoScan(void)
{
	cout << "Nxp6621Tuner StopAutoScan" << endl;
}
	

bool Nxp6621Tuner::IsSt(void) const
{
	cout << "Nxp6621Tuner IsSt" << endl;
	return false;
}
int Nxp6621Tuner::GetLevel(void) const
{
	cout << "Nxp6621Tuner GetLevel" << endl;
	return 0;
}

int main()
{
	Tuner *pTuner = new Nxp6621Tuner;
	
	pTuner->StartAutoScan();
	pTuner->ProcAutoScan();
	pTuner->StopAutoScan();
	
	delete pTuner;
	
	return 0;
}
