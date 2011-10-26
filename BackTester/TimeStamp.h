#pragma once

class TimeStamp
{
public:

	TimeStamp(const int aYear, const int aMonth, const int aDay, const int aSec = 0)
		:theYear(aYear), 
		theMonth(aMonth), 
		theDay(aDay), 
		theSec(aSec)
	{
	}

	~TimeStamp(void)
	{
	}

private:
	int theYear;
	int theMonth;
	int theDay;
	int theSec;

};
