#include "Headers/GameObject.h"

namespace ArmorEngine
{
	
	void GameObject::Update()
	{
		for (Component* pComponent : this->pComponents)
		{
			std::cout << pComponent->a << std::endl;
		}
	}
	
}