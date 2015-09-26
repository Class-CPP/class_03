.PHONY: clean run 
all: myprog

myprog: main.cc
	g++ main.cc -o myprog

clean:
	rm -f myprog

run: myprog
	./myprog


