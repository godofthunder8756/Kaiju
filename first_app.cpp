#include "first_app.hpp"
#include "kaiju_window.hpp"
namespace kaiju {

	void FirstApp::run() {
		while (!kaijuWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}