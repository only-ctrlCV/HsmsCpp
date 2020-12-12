#pragma once
#include "windows.h"
#include "../../include/gem.h"


class CHsmsEquipment
{
public:
	CHsmsEquipment();
	~CHsmsEquipment();

public:
	int Start();
	int Stop();

private:
	int handleMessage(const SecsMessage& msg);

private:
	GemPtr m_pGem;
};

