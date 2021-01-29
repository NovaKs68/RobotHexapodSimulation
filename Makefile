CXX       := g++
CXX_FLAGS := -std=c++2a -ggdb
CXX_FLAGS_END := -lGL -lpng -lX11 -pthread

BIN     := bin
SRC     := src
INCLUDE := include
INCLUDE_LIB_PGE := libs/PGE

LIBRARIES   :=
EXECUTABLE  := main


all: $(BIN)/$(EXECUTABLE)

run: clean all; clear; ./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp; $(CXX) $(CXX_FLAGS) -I$(INCLUDE) -I$(INCLUDE_LIB_PGE) $^ -o $@ $(LIBRARIES) $(CXX_FLAGS_END)

clean: -rm $(BIN)/*

# -lglfw -lGLU