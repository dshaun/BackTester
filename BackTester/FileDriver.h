#pragma once
#include "TimeStamp.h"

class FileDriver
{
public:

	FileDriver(void)
	{
	}

	virtual int fetch_data_for_date(const TimeStamp &aTime) = 0
	{
	}

	virtual ~FileDriver(void)
	{
	}
};
