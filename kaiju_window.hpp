#pragma once

//std
#include <cstdlib> 
#include <iostream>
#include <stdexcept>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
namespace kaiju {
	class KaijuWindow {
		public:
			KaijuWindow(int w, int h, std::string name);
			~KaijuWindow();

			KaijuWindow(const KaijuWindow&) = delete;
			KaijuWindow& operator=(const KaijuWindow&) = delete;

			bool shouldClose() { return glfwWindowShouldClose(window); }

			void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);

		private:
			void initWIndow();

			const int width;
			const int height;

			std::string windowName;
			GLFWwindow *window;
	};
}	//namespace kaiju