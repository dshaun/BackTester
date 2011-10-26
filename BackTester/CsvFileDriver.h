#pragma once
#include "filedriver.h"

class CsvFileDriver :
	public FileDriver
{
public:
	CsvFileDriver(void);
	virtual ~CsvFileDriver(void);
};
