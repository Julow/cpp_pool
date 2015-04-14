# LOL

NAME := identify
C_DIR := .
H_DIRS := .
O_DIR := o
LIBS := 
CC := clang++
FLAGS := -Wall -Wextra -Werror -O2
LINKS := 
HEADS := -I. 

all: $(NAME)

o/A.cpp.o: ./A.cpp ./A.hpp
	@$(COMPILE)
o/B.cpp.o: ./B.cpp ./B.hpp
	@$(COMPILE)
o/Base.cpp.o: ./Base.cpp ./Base.hpp
	@$(COMPILE)
o/C.cpp.o: ./C.cpp ./C.hpp
	@$(COMPILE)
o/main.cpp.o: ./main.cpp ./Base.hpp ./A.hpp ./B.hpp ./C.hpp
	@$(COMPILE)

MSG_0 := printf '\033[0;32m%-10.10s\033[0;0m\r'
MSG_1 := printf '\033[0;31m%-10.10s\033[0;0m\n'

COMPILE = $(MSG_0) $< ; $(CC) $(FLAGS) $(HEADS) -c -o $@ $< || $(MSG_1) $<

O_FILES := o/A.cpp.o \
		o/B.cpp.o \
		o/Base.cpp.o \
		o/C.cpp.o \
		o/main.cpp.o

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
	@rm -f identify 2> /dev/null || true

re: fclean all

make:
	@bash 'makemake.sh' re

.PHONY: all clean fclean re make
