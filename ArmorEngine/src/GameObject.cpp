#include "GameObject.h"

namespace ArmorEngine
{
	class GameObject
	{
		public:
			std::string name;
			std::list<GameObject> children;
			int id;
			std::list<Component*> components;
			
			GameObject(std::string name,int id) : 
				name(name),
				id(id)
			{};


	};
}