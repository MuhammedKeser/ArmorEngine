#include "Headers/GameObject.h"

namespace ArmorEngine
{
	
	std::list<GameObject*> GameObject::pGameObjects = std::list<GameObject*>();

	GameObject::GameObject(std::string name, int id) :
		name(name),
		id(id)
	{
		GameObject::pGameObjects.push_back(this);
	};

	void GameObject::Update()
	{
		for (Component* pComponent : this->pComponents)
		{
			std::cout << pComponent->a << std::endl;
		}
	}
	void GameObject::AddComponent(Component* pComponentToAdd)
	{
		this->pComponents.push_back(pComponentToAdd);
	}
}