# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wconnell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 14:18:57 by wconnell          #+#    #+#              #
#    Updated: 2018/10/30 14:32:55 by wconnell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: 
	gcc -Wall -Wextra -Werror *.c
	./a.out

cat:
	./a.out | cat -e

clean:
	rm a.out

norm:
	norminette

git:
	rm a.out
	rm Makefile
	git add .
	git commit -m "makefile push"
	git push
	cd ..
	git status
	ls
