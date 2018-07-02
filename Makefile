CC = g++
CPPFLAGS = -Wall -g -std=c++11
DIR_NAME = project1
EXE_NAME = project1
# format for items in make file
# target: dependancies
# 	actions
# *.o are output files used in executables
# *.cpp and *.h files are used as dependancies for *.o files
$(EXE_NAME): bone_class.o

test: bone_class.o chicken_yard_class.o

bone_class.o: bone_class.h

chicken_yard_class.o: chicken_yard_class.h

.PHONY: clean

clean:	# clean the directory
	$(info -- cleaning the directory --)
	rm -f *.o
	rm -f $(EXE_NAME)
debug: # start debugger
	gdb ./$(EXE_NAME)
memcheck: # check for memory leaks
	valgrind --tool=memcheck --leak-check=full ./$(EXE_NAME)
tar-zip: #zip up directory
	tar cvf $(DIR_NAME).tar $(DIR_NAME)