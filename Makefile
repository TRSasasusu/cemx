# Makefile

PROGRAM = cemx.exe
OBJS = cemx.o info_from_dot_file.o open_pane.o

CXX = g++
CXXFLAGS = -c

.PHONY: all
all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $<

cemx.o: cemx.h
info_from_dot_file.o: cemx.h
open_pane.o: cemx.h
