#include <iostream>
#include "Tuner.h"

using namespace std;

Tuner::Tuner():
On(0),
Area(0),
Band(0),
Freq(8750)
{
	cout << "create tuner" << endl;
}
Tuner::Tuner(int area,int band):
On(0),
Area(area),
Band(band),
Freq(8750)
{
	cout << "create tuner" << endl;
}
Tuner::~Tuner()
{
	cout << "delate tuner" << endl;
}
	
void Tuner::TunerOn(void)
{
	cout << "Tuner TunerOn" << endl;
	On = true;
}
void Tuner::TunerOff(void)
{
	cout << "Tuner TunerOff" << endl;
	On = false;
}
void Tuner::TunerReset(void)
{
	cout << "Tuner TunerReset" << endl;
}
void Tuner::SetFreq(int freq,int band)
{
	Freq = freq;
	Band = band;
	cout << "Tuner SetFreq: freq=" << Freq << "Band=" << Band << endl;
}
void Tuner::SetFreq(int freq)
{
	Freq = freq;
	cout << "Tuner SetFreq: freq=" << Freq << endl;
}
void Tuner::SetArea(int area)
{
	Area = area;
	cout << "Tuner SetArea:" << Area << endl;
}
void Tuner::SetMute(int on)
{
	if(on)
	{
		
	}
	else
	{
		
	}
	cout << "Tuner SetMute:" << on << endl;
}
void Tuner::SetBand(int band)
{
	Band = band;
	cout << "Tuner SetBand = " << Band << endl;
}
void Tuner::InitBand(void)
{
	cout << "Tuner InitBand" << endl;
}
void Tuner::StartAutoScan(void)
{
	cout << "Tuner StartAutoScan" << endl;
}
void Tuner::ProcAutoScan(void)
{
	cout << "Tuner ProcAutoScan" << endl;
}
void Tuner::StopAutoScan(void)
{
	cout << "Tuner StopAutoScan" << endl;
}
	
bool Tuner::IsTunerOn(void) const
{
	cout << "tuner IsTunerOn" << endl;
	return On;
}
int Tuner::GetArea(void) const
{
	cout << "tuner GetArea" << endl;
	return Area;
}
int Tuner::GetBand(void) const
{
	cout << "tuner Band" << endl;
	return Band;
}
int Tuner::GetFreq(void) const
{
	cout << "tuner GetFreq" << endl;
	return Freq;
}
bool Tuner::IsSt(void) const
{
	cout << "tuner IsSt" << endl;
	return false;
}
int Tuner::GetLevel(void) const
{
	cout << "tuner GetLevel" << endl;
	return 0;
}


