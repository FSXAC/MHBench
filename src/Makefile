CC = gcc
FLAGS = -O2
OUTDIR = bin

matmul.out: util.hpp matmul.cpp
	$(CC) $(FLAGS) matmul.cpp -o $(OUTDIR)/$@

ref.out: util.hpp reduceref.cpp
	$(CC) $(FLAGS) reduceref.cpp -o $(OUTDIR)/$@

clean:
	rm $(OUTDIR)/*.out