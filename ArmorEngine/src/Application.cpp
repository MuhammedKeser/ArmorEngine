#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>


#include "GameObject.cpp"
#include "ConductElectricity.cpp"
#include "Conduct.cpp"

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
	ArmorEngine::Conduct * cond = &ArmorEngine::Conduct();
	
	
	std::cin.get();

	return 0;
}