all: ./src/main.cpp
	mkdir -p ./debug ./build
	g++ -I"../lib-catedra" -IList -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"./debug/main.d" -MT"./src/main.o" -o "./debug/main.o" "./src/main.cpp"
	g++ -L"../lib-catedra" -o "./build/main" ./debug/main.o -lList

clean:
	rm  ./build/*
	rm -rf ./debug