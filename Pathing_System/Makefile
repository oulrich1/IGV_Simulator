CXX = g++
CPPFLAGS = -g -Wall -pedantic

# uncomment the lines for the machine you are compiling on
# comment out the lines for the other two machines
# windows/cygwin libraries
#LIBS = -lfl  -lopengl32 -lglut32 -lglu32

# linux/UNIX libraries (comment out next two lines if not using linux/unix)
#   if the glut library (libglut.so) does not live in /usr/lib
#   then add a -L/ for glut's lib directory in the next line
LIBDIRS  = -L/usr/X11R6/lib  
LIBS = -lX11 -lglut -lGL -lGLU -lm -lfl

SRC =  WorldObject.cpp WayPoints.cpp IGV_Bot.cpp GridSquare.cpp CollidableObject.cpp Grid.cpp   main.cpp
OBJ = $(SRC:.cpp=.o)
# older versions of linux might also need -lXi and -lXmu 

# OS X (comment out next two lines if not using OSX
# LIBS = -framework GLUT -framework OpenGL -lobjc
# OSX = -D OSX

TARGET=igv_sim

$(TARGET): $(OBJ) 
	$(CXX) $(CPPFLAGS) $(OSX) -o $(TARGET) $(OBJ) $(LIBDIRS) $(LIBS)

# rul to build objects.. from source.. 
$(OBJ): $(SRC) 
	$(CC) -c $(CPPFLAGS) $(SRC)

clean:
	rm -f $(OBJ) $(TARGET)


cleano:
	rm -f $(OBJ)

