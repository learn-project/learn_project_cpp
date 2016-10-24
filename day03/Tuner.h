#ifndef __TUNER_H__
#define __TUNER_H__

class Tuner
{
public:
	Tuner();
	Tuner(int area,int band);
	virtual ~Tuner();
	
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
	
	bool IsTunerOn(void) const;
	int GetArea(void) const;
	int GetBand(void) const;
	int GetFreq(void) const;
	virtual bool IsSt(void) const;
	virtual int GetLevel(void) const;
private:
	
protected:
	bool On;
	int Area;
	int Band;
	int Freq;
};

#endif