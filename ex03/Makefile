# LOL

NAME := mindopen
C_DIR := .
H_DIRS := .
O_DIR := o
LIBS := 
CC := clang++
FLAGS := -Wall -Wextra -Werror -O2
LINKS := 
HEADS := -I. 

all: $(NAME)

o/DecInstruction.cpp.o: ./DecInstruction.cpp ./DecInstruction.hpp ./Mindopen.hpp
	@$(COMPILE)
o/EndLoopInstruction.cpp.o: ./EndLoopInstruction.cpp ./LoopInstruction.hpp ./EndLoopInstruction.hpp ./Mindopen.hpp
	@$(COMPILE)
o/IInstruction.cpp.o: ./IInstruction.cpp ./IInstruction.hpp
	@$(COMPILE)
o/IncInstruction.cpp.o: ./IncInstruction.cpp ./IncInstruction.hpp ./Mindopen.hpp
	@$(COMPILE)
o/LeftInstruction.cpp.o: ./LeftInstruction.cpp ./LeftInstruction.hpp ./Mindopen.hpp
	@$(COMPILE)
o/LoopInstruction.cpp.o: ./LoopInstruction.cpp ./LoopInstruction.hpp ./EndLoopInstruction.hpp ./Mindopen.hpp
	@$(COMPILE)
o/main.cpp.o: ./main.cpp ./Mindopen.hpp
	@$(COMPILE)
o/Mindopen.cpp.o: ./Mindopen.cpp ./Mindopen.hpp ./RightInstruction.hpp ./LeftInstruction.hpp ./IncInstruction.hpp ./DecInstruction.hpp ./WriteInstruction.hpp ./ReadInstruction.hpp ./LoopInstruction.hpp ./EndLoopInstruction.hpp
	@$(COMPILE)
o/ReadInstruction.cpp.o: ./ReadInstruction.cpp ./ReadInstruction.hpp ./Mindopen.hpp
	@$(COMPILE)
o/RightInstruction.cpp.o: ./RightInstruction.cpp ./RightInstruction.hpp ./Mindopen.hpp
	@$(COMPILE)
o/WriteInstruction.cpp.o: ./WriteInstruction.cpp ./WriteInstruction.hpp ./Mindopen.hpp
	@$(COMPILE)

MSG_0 := printf '\033[0;32m%-24.24s\033[0;0m\r'
MSG_1 := printf '\033[0;31m%-24.24s\033[0;0m\n'

COMPILE = $(MSG_0) $< ; $(CC) $(FLAGS) $(HEADS) -c -o $@ $< || $(MSG_1) $<

O_FILES := o/DecInstruction.cpp.o \
		o/EndLoopInstruction.cpp.o \
		o/IInstruction.cpp.o \
		o/IncInstruction.cpp.o \
		o/LeftInstruction.cpp.o \
		o/LoopInstruction.cpp.o \
		o/main.cpp.o \
		o/Mindopen.cpp.o \
		o/ReadInstruction.cpp.o \
		o/RightInstruction.cpp.o \
		o/WriteInstruction.cpp.o

$(NAME): o/ $(LIBS) $(O_FILES)
	@$(MSG_0) $@ ; $(CC) $(FLAGS) -o $@ $(O_FILES) $(LINKS) && echo || $(MSG_1) $@

o/:
	@mkdir -p $@ 2> /dev/null || true

o/%:
	@mkdir -p $@ 2> /dev/null || true

clean:
	@rm -f $(O_FILES) 2> /dev/null || true
	@rmdir -p o 2> /dev/null || true

fclean: clean
	@rm -f mindopen 2> /dev/null || true

re: fclean all

make:
	@bash 'makemake.sh' re

.PHONY: all clean fclean re make
