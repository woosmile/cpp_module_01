NAME = zombie

CPPFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm
RMFLAGS = -rf

HEADER = \
Zombie.hpp \

SRCS = \
main.cpp \
newZombie.cpp \
randomChump.cpp \
Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CXX) $(CPPFLAGS) -o $@ $(OBJS)

$(OBJS) : $(SRCS) $(HEADER)
	$(CXX) $(CPPFLAGS) -c $(SRCS)

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all clean fclean re