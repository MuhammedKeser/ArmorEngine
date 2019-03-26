#pragma once
#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <list>

#include "Headers/GameObject.h"
#include "Headers/ConductElectricity.h"
#include "Headers/Conduct.h"

int main(void)
{

	GLFWwindow* window;

	//Debug
	std::cout << "HEY";

	//You need to initialize this 
	if (!glfwInit())
		return -1;

	window = glfwCreateWindow(640,480,"Header",NULL,NULL);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	//You need to have a rendering context prior to glew init
	glfwMakeContextCurrent(window);

	if (glewInit() != GLEW_OK)
	{
		std::cout << "ERROR!" << std::endl;
	}

	ArmorEngine::GameObject gO = ArmorEngine::GameObject("whatever", 2);
	std::cout << gO.name;
	ArmorEngine::ConductElectricity elec(0.5f);
	ArmorEngine::Conduct * cond = &elec;
	gO.pComponents.push_back(cond);
	
	std::list <ArmorEngine::GameObject*> allObjects;
	allObjects.push_back(&gO);

	while (true)
	{
		for (ArmorEngine::GameObject* pCurrentGameObject : allObjects)
		{
			pCurrentGameObject->Update();
		}
	}

	
	std::cin.get();

	return 0;
}