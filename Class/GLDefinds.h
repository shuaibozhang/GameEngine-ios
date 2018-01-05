#ifdef IS_WINDOWS
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#else
#define glClearDepth                glClearDepthf
#define glDeleteVertexArrays        glDeleteVertexArraysOES
#define glGenVertexArrays           glGenVertexArraysOES
#define glBindVertexArray           glBindVertexArrayOES
#define glMapBuffer                 glMapBufferOES
#define glUnmapBuffer               glUnmapBufferOES

#define GL_DEPTH24_STENCIL8         GL_DEPTH24_STENCIL8_OES
#define GL_WRITE_ONLY               GL_WRITE_ONLY_OES

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#endif // WINDOWS
