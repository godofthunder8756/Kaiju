#pragma once

#include "kaiju_window.hpp"
#include "kaiju_pipeline.hpp"

namespace kaiju {
	class FirstApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;
		void run();
	private:
		KaijuWindow kaijuWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };
		KaijuPipeline kaijuPipeline{ "shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv" };
	};
}