cc=gcc
Cflags= -Wall -Wextra -Werror -pedantic
Cfiles= shell.c prompt.c read_input.c _getline.c built_in.c execution.c parsing.c _which.c
Objs= shell.o prompt.o read_input.o _getline.o built_in.o execution.o parsing.o _which.o
includes= -I"C:\msys64\usr\include"

all:shell.exe

shell.exe: $(Objs) shell.h
	$(cc) $(Cflags) -o $@ $(Objs)

%.o: %.c
	$(cc) $(Cflags) -c -o $@ $^

run:
	./shell.exe

## cleaning proceedures.
clean: 
	rm -r *.o *.exe
