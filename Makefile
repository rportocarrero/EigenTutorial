CC=g++
CFLAGS=-I ./eigen-3.4.0/ -Wall
TARGET=assignmentResize FirstProgram matrixVectorIndex \
resizeNoOp resizing setSizeAtCompileTime sizeSetAtRuntime \
additionAndSubtraction scalarMultiplicationAndDivision

all: $(TARGET)
$(TARGET):
	$(CC) $(CFLAGS) $@.cpp -o $@ $^
clean:
	rm -rf $(TARGET) *.o