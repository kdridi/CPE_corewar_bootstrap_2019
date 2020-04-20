all:
	make -C part1 $@
	make -C part2 $@

clean:
	make -C part1 $@
	make -C part2 $@

fclean:
	make -C part1 $@
	make -C part2 $@

re: fclean all

.PHONY: all clean fclean re