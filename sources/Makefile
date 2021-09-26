CC=g++

f0=./main.cpp
f1=./jsClass/js.cpp
f2=./jsClass/engine/engine.cpp
f3=./jsClass/engine/error/error.cpp
f4=./jsClass/engine/error/tools/strings/strings.cpp
f5=./jsClass/engine/parsing/parser.cpp
f6=./jsClass/engine/parsing/parseTree/tree/tree.cpp
f7=./jsClass/engine/parsing/parseTree/tree/node/node.cpp
f8=./jsClass/engine/lexing/lexer.cpp
f9=./jsClass/engine/reducing/reducer.cpp

all: compile
compile:
	@${CC} -g -o ./main.exe ${f0} ${f1} ${f2} ${f3} ${f4} ${f5} ${f6} ${f7} ${f8} ${f9} 
	@./main.exe
