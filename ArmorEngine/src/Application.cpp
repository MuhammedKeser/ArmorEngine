#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(void)
{

	GLFWwindow* window;

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

	return 0;
}