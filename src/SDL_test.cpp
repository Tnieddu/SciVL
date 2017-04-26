/*-------------SDL_test.cpp---------------------------------------------------//
*
* Purpose: this file intends to quickly test how SDL works and will become the 
*          basis of I/O for the SciVL library
*   Notes: Add the ability to delete buffers and vertex arrays
*          Add ability to move / modify shapes
*          Add a generalized version of the shader struct
*
*-----------------------------------------------------------------------------*/

#include "../include/GL_setup.h"

int main(){

    Param par = set_params("test_fft");
    SDL_init(par);

    // Defining OGL stuff
    setup_OGL(par);

    while (!par.end){
        process_events(par);

        draw_screen(par);

    }

    // Clean-up
    //glDeleteVertexArrays(1, &VAO);
    //glDeleteBuffers(1, &VBO);
    par.destroy();

}
