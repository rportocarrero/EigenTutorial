CC=g++
CFLAGS=-I ./eigen-3.4.0/ -Wall
TARGET=assignmentResize FirstProgram matrixVectorIndex \
resizeNoOp resizing setSizeAtCompileTime sizeSetAtRuntime \
additionAndSubtraction scalarMultiplicationAndDivision \
transpositionAndConjugation matrixMatrixAndMatrixVectorMultiplication \
dotProductAndCrossProduct arithmeticReductionOperations \
coefficientArguments arrayIndexing arrayAddSub arrayMultiplication \
arrayCoefficientOperations arrayMatrixConversions arrayMatrixConversions2 \

TARGETS=$(wildcard *.cpp)

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) src/$@.cpp -o bin/$@ $^
clean:
	rm -rf bin/*