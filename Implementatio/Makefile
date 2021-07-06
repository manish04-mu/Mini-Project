#Target_name : Dependencies
#<TAB>Command
SRC = first.c
INC = fun.h
all.exe : $(SRC) $(INC)
	gcc $^ -o $@

run: $@
	./all

clean:
	del all.exe
