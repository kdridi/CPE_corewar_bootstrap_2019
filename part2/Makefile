CC		= clang -fsanitize=address
CFLAGS	= -W -Wall -Wextra -Werror
RM		= rm -rf

S1DIR		= step1
S1TARGET	= $(S1DIR)/yolotron-asm
S1SRC		= $(wildcard $(S1DIR)/*c)
S1OBJ		= $(S1SRC:.c=.o)

S2DIR		= step2
S2TARGET	= $(S2DIR)/yolotron-vm
S2SRC		= $(wildcard $(S2DIR)/*c)
S2OBJ		= $(S2SRC:.c=.o)

all: $(S1TARGET) $(S2TARGET)

$(S1TARGET): $(S1OBJ)
	$(CC) -o $@ $^

$(S2TARGET): $(S2OBJ)
	$(CC) -o $@ $^

clean:
	$(RM) $(S1OBJ)
	$(RM) $(S2OBJ)

fclean: clean
	$(RM) $(S1TARGET)
	$(RM) $(S2TARGET)

re: fclean all

.PHONY: all clean fclean re