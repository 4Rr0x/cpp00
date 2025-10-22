# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 14:27:38 by jopedro-          #+#    #+#              #
#    Updated: 2025/10/22 12:17:18 by jopedro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                     NAMES                                    #
#==============================================================================#
NAME = Accounts

_SUCCESS 		= [$(GRN)SUCCESS$(D)]
_INFO 			= [$(BLU)INFO$(D)]
_NORM 			= [$(MAG)Norminette$(D)]
_NORM_SUCCESS 	= $(GRN)=== OK:$(D)
_NORM_INFO 		= $(BLU)File no:$(D)
_NORM_ERR 		= $(RED)=== KO:$(D)
_SEP 			= =====================

#==============================================================================#
#                                    PATHS                                     #
#==============================================================================#
SRC_PATH		= src
BUILD_PATH		= .build
TEMP_PATH		= .temp

SRC				= $(SRC_PATH)/Account.cpp
SRC				+= tests.cpp

OBJS			= $(SRC:$(SRC_PATH)/%.cpp=$(BUILD_PATH)/%.o)

#==============================================================================#
#                              COMPILER & FLAGS                                #
#==============================================================================#
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
DFLAGS 		= -g


#==============================================================================#
#                                  RULES                                       #
#==============================================================================#
all: $(NAME)

$(BUILD_PATH):
	$(MKDIR_P) $(BUILD_PATH)

$(NAME): $(OBJS)
	@echo "[$(YEL)Compiling megaphone$(D)]"
	$(CXX) $(CXXFLAGS) $(DFLAGS) $(OBJS) -o $(NAME)
	@echo "[$(_SUCCESS) compiling $(MAG)megaphone!$(D) $(YEL)🖔$(D)]"

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.cpp
	@mkdir -p .build
	@echo -n "$(MAG)█$(D)"
	$(CXX) $(CXXFLAGS) $(DFLAGS) -c $< -o $@

-include $(BUILD_PATH)/*.d

clean:
	@echo "* $(YEL)Removing $(MAG)$(NAME)$(D) and deps $(YEL)object files$(D)"
	rm -rf $(BUILD_PATH)
	@echo "* $(YEL)Removing $(CYA)$(BUILD_PATH)$(D) folder & files$(D): $(_SUCCESS)"

fclean: clean
	$(RM) $(NAME)
	@echo "* $(YEL)Cleaning executable$(D): $(_SUCCESS)"

re: fclean all

.PHONY: all clean fclean re

#==============================================================================#
#                                  UTILS                                       #
#==============================================================================#
B  		= $(shell tput bold)
BLA		= $(shell tput setaf 0)
RED		= $(shell tput setaf 1)
GRN		= $(shell tput setaf 2)
YEL		= $(shell tput setaf 3)
BLU		= $(shell tput setaf 4)
MAG		= $(shell tput setaf 5)
CYA		= $(shell tput setaf 6)
WHI		= $(shell tput setaf 7)
D 		= $(shell tput sgr0)

