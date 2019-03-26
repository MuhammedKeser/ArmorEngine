#pragma once
#include <string>
#include <list>
#include "Component.h";
#include <iostream>

namespace ArmorEngine
{
	class GameObject
	{
		public:
			std::string name;
			std::list<GameObject> children;
			int id;
			std::list<Component*> pComponents;

			GameObject(std::string name, int id) :
				name(name),
				id(id)
			{};
			void Update();


	};
}