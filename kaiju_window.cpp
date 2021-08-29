#include "kaiju_window.hpp"

namespace kaiju {
	KaijuWindow::KaijuWindow(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name } {
		initWIndow();
	}

	KaijuWindow::~KaijuWindow(){
		glfwDestroyWindow(window);
		glfwTerminate();
	}
	void KaijuWindow::initWIndow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}