#Targetname : dependencies
#<TAB>command
# Name of the project
TEST_PROJ_NAME = Library
# Output directory
BUILD_DIR = Build

# All include folders with header files
INC=inc

TEST = unity/unity.c

# All source code files
SRC = src/first.c

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Default target built
all: $(SRC) $(BUILD_DIR) $(TEST)
	gcc -I unity $(SRC) $ -I $(INC) -o $(call FixPath,$(BUILD_DIR).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)
# Call `make run` to run the application
run: all
	$(call FixPath,$(BUILD_DIR) .$(EXEC))

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)