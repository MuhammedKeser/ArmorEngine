#pragma once
#include "Conduct.h"

namespace ArmorEngine
{
	class ConductElectricity : public Conduct
	{

	public:
		float charge;
		ConductElectricity(float charge) :
			charge(charge)
		{};

	};


}