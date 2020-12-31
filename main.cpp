#include <iostream>
// #include "adder.h"

#include <GLFW/glfw3.h>
#include <OLASConfig.h>

#ifdef USE_ADDER
	#include <adder.h>
#endif
using namespace std;

//float add(float a,float b);

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main(){
	//cout << "HelloW!\n"; 
	//cout << factorial(6);
	//cout << "\n\n\n";

#ifdef USE_ADDER
	cout << "using adder lib: " << add(62.1f, 532.1f) << "\n\n";
#else
	cout << "not using adder lib: " << 72.1f + 73.7f << "\n\n";	
#endif

	GLFWwindow *window;
	if( !glfwInit() )
	{
			fprintf( stderr, "Failed to initialize GLFW\n" );
			exit( EXIT_FAILURE );
	}

	  window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

		  while( !glfwWindowShouldClose(window) )
    {
        // Draw gears
        // draw();

        // Update animation
        // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

	return 0;
}