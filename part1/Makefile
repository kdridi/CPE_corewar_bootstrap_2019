CC		= clang -fsanitize=address
CFLAGS	= -W -Wall -Wextra -Werror
RM		= rm -rf

S1DIR		= step1
S1TARGET	= $(S1DIR)/write-some-text
S1SRC		= $(wildcard $(S1DIR)/*c)
S1OBJ		= $(S1SRC:.c=.o)

S2DIR		= step2
S2TARGET	= $(S2DIR)/write-a-number-as-text
S2SRC		= $(wildcard $(S2DIR)/*c)
S2OBJ		= $(S2SRC:.c=.o)

S3DIR		= step3
S3TARGET	= $(S3DIR)/write-a-number-as-int
S3SRC		= $(wildcard $(S3DIR)/*c)
S3OBJ		= $(S3SRC:.c=.o)

S4DIR		= step4
S4TARGET	= $(S4DIR)/without-padding
S4SRC		= $(wildcard $(S4DIR)/*c)
S4OBJ		= $(S4SRC:.c=.o)

S5DIR		= step5
S5TARGET	= $(S5DIR)/with-padding
S5SRC		= $(wildcard $(S5DIR)/*c)
S5OBJ		= $(S5SRC:.c=.o)

all: $(S1TARGET) $(S2TARGET) $(S3TARGET) $(S4TARGET) $(S5TARGET)

$(S1TARGET): $(S1OBJ)
	$(CC) -o $@ $^

$(S2TARGET): $(S2OBJ)
	$(CC) -o $@ $^

$(S3TARGET): $(S3OBJ)
	$(CC) -o $@ $^

$(S4TARGET): $(S4OBJ)
	$(CC) -o $@ $^

$(S5TARGET): $(S5OBJ)
	$(CC) -o $@ $^

clean:
	$(RM) $(S1OBJ)
	$(RM) $(S2OBJ)
	$(RM) $(S3OBJ)
	$(RM) $(S4OBJ)
	$(RM) $(S5OBJ)

fclean: clean
	$(RM) $(S1TARGET)
	$(RM) $(S2TARGET)
	$(RM) $(S3TARGET)
	$(RM) $(S4TARGET)
	$(RM) $(S5TARGET)

re: fclean all

.PHONY: all clean fclean re