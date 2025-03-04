# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@student.42madrid.com>  |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2025/02/27 18:47:52 by ldel-val       '._  _.'   .        .      #
#    Updated: 2025/03/04 08:46:13 by ldel-val          ``                      #
#                                                                              #
# **************************************************************************** #

#Compiler and linker
CC 		:=	cc

#Remove tool
RM 		:=	rm -f

#Flags
CFLAGS 	:=	-Wall -Wextra -Werror -g3 -Isrc

#Project stuff 

NAME 	:=	philo
SRC 	:=	src/philo.c\
			src/thread_functions.c\
			src/actions.c\
			src/aux.c\
			src/actions/fork_actions.c\
			src/actions/main_actions.c\
			src/actions/state_actions.c
OBJ		:=	$(SRC:.c=.o)

#-----------------------------------------------------------------------------#
#                                    Rules                                    #
#-----------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
