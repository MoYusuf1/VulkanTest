#pragma once
# include <GLFW/glfw3.h>
#include <string>


namespace lve {
    class LveWindow{
        
        public:
            LveWindow(int w, int h, std::string name);
            ~LveWindow();

            LveWindow(const LveWindow&) = delete;
            LveWindow& operator=(const LveWindow&);

            bool shouldClose() { return glfwWindowShouldClose(window); }

        private:
            void initWindow();

            const int width;
            const int height;

            std::string windowName;
        
            GLFWwindow* window;
        };
}