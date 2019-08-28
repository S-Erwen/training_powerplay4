NAME = ../bin/powerplay.exe
SRCS = ft_define_map.c ft_interface.c ft_lib.c ft_power.c main.c
HEADER = 
OBJS = ${SRCS:.c=.o}

.c.o: $(HEADER)
		gcc -Wall -Wextra -Werror -I include -c $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
		gcc $(OBJS) -o $(NAME)

all : $(NAME)

clean:
		rm -f $(OBJS)
		
re: all clean
