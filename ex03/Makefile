NAME = war

CPPFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm
RMFLAGS = -rf

HEADER = \
HumanA.hpp \
HumanB.hpp \
Weapon.hpp

SRCS = \
main.cpp \
HumanA.cpp \
HumanB.cpp \
Weapon.cpp
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