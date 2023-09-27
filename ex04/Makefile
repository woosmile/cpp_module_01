NAME = change

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm
RMFLAGS = -rf

HEADER = \
OriginFile.hpp \
ResultFile.hpp

SRCS = \
main.cpp \
OriginFile.cpp \
ResultFile.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all clean fclean re