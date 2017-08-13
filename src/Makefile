#=======================================================================
# Basic C++: makefile example to use as a reminder or as a template
#-----------------------------------------------------------------------
# Julien Deantoni --- No Copyright 2016
# $Id: Makefile old but comprehensive style,v1.0 2016/09/06
#=======================================================================

#example name of the executable to generate
EXE_NAME = robot.exe

#list of the options that must be passed to the compiler g++(man g++for details)
CXX_FLAGS =-g -ansi -Wall -Wextra -Wold-style-cast -Woverloaded-virtual -D_DEBUG_ -std=c++11

#shortcut to call the compiler call with the specified options and includes
CXX = g++ $(CXX_FLAGS) -c #-I$(EXTRA_HEADER_PATH)

#variable for the linkers (which are here include in the same command line than the compiler
LINK_CXX = g++ $(CXX_FLAGS) 
	
$(EXE_NAME): class.o
	$(LINK_CXX) *.o -o $(EXE_NAME)
	-rm -f *.gch *~

class.o:
	$(CXX) *.cpp *.hpp
	
clean:
	-rm -f *.o
	-rm -f $(EXE_NAME)
	-rm -f *.gch *~

re: 
	-rm -f *.o
	-rm -f $(EXE_NAME)
	-rm -f *.gch *~
	$(CXX)  *.cpp *.hpp
	$(LINK_CXX) *.o -o $(EXE_NAME)
	-rm -f *.gch *~



