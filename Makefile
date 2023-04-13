# E89 Pedagogical & Technical Lab
# project:     tp circle
# created on:  2023-01-12 - 12:10 +0100
# 1st author:  victor.vandeputte - victor.vandeputte
# description: makefile

NAME	=	circle

SRCS	=	src/set_pixel.c		\
		src/clear_pixelarray.c	\
		src/main.c		\
		src/set_circle.c	\
		src/set_spiral.c	\
		src/deg_to_rad.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=	-llapin -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lstdc++ -lm

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

save:
	git status
	git add Makefile src/*.c include/*.h
	git commit -m "$(NAME) sauvegarde"
	git push

exe:
	make
	./circle
	make fclean

mclean:
	rm src/*.c~ src/*.o include/*.h~ *.c~ Makefile~ *.o

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
